%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
#include "Funciones.h"


extern int yylex();
extern void yyerror(char *);
extern char* yytext;
extern int yylineno;

void generarAssembler(t_arbol* pArbol);

extern FILE* yyin;

void reiniciarPunteros();

tLista listaSimbolos;
tLista listaAux;
t_cola cola;
t_pila pilaSint;

FILE *pIntermedia;
FILE *pArbol;
FILE *pAssembler;
FILE *pCode;

char str_cuerpo[50];
char str_sentencias[50];
char str_elementos[50];
char str_contLong[50];

t_NodoArbol* Ptr;
t_NodoArbol* Sptr;
t_NodoArbol* Gptr;
t_NodoArbol* Aptr;
t_NodoArbol* Eptr;
t_NodoArbol* Tptr;
t_NodoArbol* Fptr;
t_NodoArbol* Cptr; //Puntero constantes string
t_NodoArbol* Condptr;
t_NodoArbol* Condptraux;
t_NodoArbol* Ifptr;
t_NodoArbol* Whileptr;
t_NodoArbol* Cuerpoptr;
t_NodoArbol* CuerpoWhileptr;
t_NodoArbol* Trueptr;
t_NodoArbol* Falseptr;
t_NodoArbol* Dptr;
t_NodoArbol* Getptr;
//t_NodoArbol* Auxptr;
t_NodoArbol* Lptr;
t_NodoArbol* Emaxptr;
t_NodoArbol* Eminptr;
t_NodoArbol* Equmax;
t_NodoArbol* Equaux;
t_NodoArbol* Equaux2;
t_NodoArbol* Nodocond;
t_NodoArbol* Nodocond2;
t_NodoArbol* Nodocuerpo;
t_NodoArbol* Nodocuerpo2;
t_NodoArbol* Nodoif;
t_NodoArbol* Nodoif2;
t_NodoArbol* Equmin;
t_NodoArbol* Nodoaux;
t_NodoArbol* Nodoaux2;
t_NodoArbol* Nodomin;
t_NodoArbol* Nodomax;
t_NodoArbol* Longptr;
t_NodoArbol* SptrCuerpo;

// Equmax y Equmin //
int min;
int aux;
int max;

int isEqumax;
int isEqumin;

// Longitud //

int isLong;
int contLong;
int esIf=0;
int isAnd=0;
int isOr=0;
int contElementos = 0;

int isWhile=0;
int contCuerpo=0;
int contSentencias=0;
%}

%union{
    /* Aca dentro se definen los campos de la variable yylval */
	char* strVal; 
}


/* Palabras reservadas */

%token WHILE_T
%token ENDWHILE
%token DISPLAY
%token GET
%token READ_T
%token FLOAT_T
%token INT_T
%token CHAR
%token IN_T
%token DO_T
%token EQUMAX
%token EQUMIN
%token AS
%token STRING

/* Saltos de linea, espacios, etc */

%token whitespace
%token linefeed
%token DIGITO 	
%token LETRA
%token COMILLA_D	
%token COMILLA_A	
%token COMILLA_C	

/* Tipos de datos, etc */

%token <strVal> CONST_INT	
%token <strVal> CONST_FLOAT
%token OP_AVG
%token <strVal> CONST_STRING
%token ELSE_T			
%token IF_T			
%token ENDIF			
%token DIM				
%token <strVal> ID_T	
%token LONG	


/* Operadores */

%left OP_SUM OP_MENOS
%left OP_MUL OP_DIVISION OP_DIV
%right MENOS_UNARIO
%left OP_MOD 
%right OP_ASIG


%token OP_DISTINTO
%token OP_IGUAL
%token OP_MAYORIGUAL
%token OP_MAYOR
%token OP_MENOR
%token OP_MENORIGUAL
%token OR_T		
%token AND_T	
%token NOT_T 


/* Llaves, parentensis, etc */

%token LLAVE_C		
%token LLAVE_A		
%token PARENT_C	
%token PARENT_A	
%token CORCH_A	
%token CORCH_C
%token COMA	
%token SEP_LINEA



%% 

/* Seccion para declaracion de reglas gramaticales - EJEMPLO */

programa_final : programa 						{ printf("Start assembler \n"); mostrarArbolDeIzqADer(&Ptr,pArbol); InOrden(&Ptr, pIntermedia); mostrarArbolDeIzqADer(&Ptr,pArbol); generarAssembler(&Ptr);  printf("Traduccion assembler \n"); printf("\nLa expresion es valida\n");}
		;
programa: sentencia 							{Ptr=Sptr;}
		;

sentencia: sentencia grammar SEP_LINEA 			{ 
													if(Sptr == NULL)
													{
														Sptr=Gptr;
													}
													else
													{
														sprintf(str_sentencias,"Sentencia%d",++contSentencias);
														Sptr=crearNodo(str_sentencias,Sptr,Gptr);}
													;}

												
														
		|  grammar SEP_LINEA					{
													Sptr=Gptr; 
													}
		|  sentencia grammar  					{ 

													if(Sptr == NULL)
													{
														Sptr=Gptr;
													}
													else
													{
														sprintf(str_sentencias,"Sentencia%d",++contSentencias);
														Sptr=crearNodo(str_sentencias,Sptr,Gptr);}
													
												;}

		|  grammar								{
													Sptr=Gptr;}
													
		|  declaracion     						{/*Sptr=crearHoja("Declaracion");*/}
		| sentencia declaracion 			 {/*sprintf(str_sentencias,"Sentencia%d",++contSentencias);
													Sptr=crearNodo(str_sentencias,Sptr,Gptr);*/}
		;


sentenciaCuerpo : sentenciaCuerpo grammar SEP_LINEA 		{ 
													sprintf(str_cuerpo,"SentenciaCuerpo%d",++contCuerpo);
													SptrCuerpo=crearNodo(str_cuerpo,SptrCuerpo,Gptr);
														}
		|  grammar SEP_LINEA					{
													SptrCuerpo=Gptr; 
													}
		|  sentenciaCuerpo grammar  					{ 
													sprintf(str_cuerpo,"SentenciaCuerpo%d",++contCuerpo);
													SptrCuerpo=crearNodo(str_cuerpo,SptrCuerpo,Gptr);
													
												
															
												;}
		|  grammar								{SptrCuerpo=Gptr; }




grammar : asig 									{printf("\nRegla Asig \n"); Gptr=Aptr;}
		| while 								{printf("\nRegla While \n"); ; Gptr=Whileptr;}
		| display 								{printf("\nRegla Display \n") ; Gptr=crearNodo("DISPLAY",Dptr,NULL); /*InOrden(&Gptr, pIntermedia); fprintf(pIntermedia, "\n"*/;}
		| get 									{printf("\nRegla Get \n");Gptr=crearNodo("GET",Getptr,NULL); /*InOrden(&Gptr, pIntermedia); fprintf(pIntermedia, "\n")*/;}
		| longitud								{printf("\nRegla Longitud \n"); Gptr=Longptr;}
		| if 									{printf("\nRegla If \n"); Gptr=Ifptr;}	
		; 

//InOrden(&Ifptr, pIntermedia); fprintf(pIntermedia, "\n");

asig: ID_T OP_ASIG expr {Aptr=crearNodo(":=",crearHoja($1),Eptr); }
	| ID_T OP_ASIG const_string_r   {Aptr=crearNodo(":=",crearHoja($1),Cptr);}
	;


while: WHILE_T cond_final LLAVE_A sentenciaCuerpo LLAVE_C { 
																	Whileptr=crearNodo("WHILE",Condptr,SptrCuerpo);
																	}
	 ;
 
if: IF_T cond_final   LLAVE_A  sentenciaCuerpo LLAVE_C {if(isAnd==1){ 
                                                         Ifptr=crearNodo("IF",Condptraux,crearNodo("IF",Condptr,SptrCuerpo));   
													    }else if (isOr==1){
														  Ifptr=crearNodo("IF", Condptr, SptrCuerpo);
														  Ifptr=crearNodo("IF",Condptraux,crearNodo("CUERPO",SptrCuerpo,Ifptr));
														}else Ifptr=crearNodo("IF",Condptr,SptrCuerpo);}
   | IF_T cond_final  LLAVE_A  sentenciaCuerpo  LLAVE_C {Trueptr=Gptr;} ELSE_T LLAVE_A sentenciaCuerpo LLAVE_C {Falseptr=Gptr;}  {printf("\nELSE\n"); Cuerpoptr=crearNodo("CUERPO",Trueptr,Falseptr); Ifptr=crearNodo("IF",Condptr,Cuerpoptr);  esIf=0;}
   | IF_T  equmin  LLAVE_A  sentenciaCuerpo {(Nodoif)->der=SptrCuerpo;}LLAVE_C    {printf("Regla Equmin\n");Ifptr=Equmin ; /*InOrden(&Equmin, pIntermedia); fprintf(pIntermedia, "\n");*/}
   | IF_T  equmax  LLAVE_A  sentenciaCuerpo {(Nodoif2)->der=SptrCuerpo;}LLAVE_C 	  {printf("Regla Equmax\n");Ifptr=Equmax ;/*InOrden(&Equmax, pIntermedia); fprintf(pIntermedia, "\n");*/}
   ;


display : DISPLAY const_string_r {Dptr=Cptr;}
	  | DISPLAY expr {Dptr=Eptr;}
	  ;


get : GET ID_T {Getptr = crearHoja($2);}
	  ;



const_string_r: CONST_STRING {
			insertarString(&listaSimbolos, $1);
			Cptr = crearHoja($1);
	};


numero: CONST_INT
		{
			insertarInt(&listaSimbolos, $1) ; Fptr = crearHoja($1);
		}
	   | CONST_FLOAT 
		{
			insertarFloat(&listaSimbolos, $1); Fptr = crearHoja($1);
		}
	   ;


    
cond_final: PARENT_A cond_final AND_T cond_final  PARENT_C
		    | PARENT_A cond AND_T { Condptraux=Condptr;} cond  PARENT_C {isAnd=1;}
			| PARENT_A cond OR_T { Condptraux=Condptr;} cond  PARENT_C  {isOr=1;}
		    | PARENT_A cond PARENT_C
		    | NOT_T  cond_final
		    | PARENT_A cond_final PARENT_C
		  	;

cond: expr OP_DISTINTO termino 				{Condptr=crearNodo("!=",Eptr,Tptr);} 
    | expr OP_IGUAL termino 				{Condptr=crearNodo("==",Eptr,Tptr);}  
    | expr OP_MAYOR termino 				{Condptr=crearNodo(">",Eptr,Tptr);}   
    | expr OP_MAYORIGUAL termino 			{Condptr=crearNodo(">=",Eptr,Tptr);}  
    | expr OP_MENOR termino 				{Condptr=crearNodo("<",Eptr,Tptr);}  
    | expr OP_MENORIGUAL termino 			{Condptr=crearNodo("<=",Eptr,Tptr);}  
    | expr OR_T termino 					{Condptr=crearNodo("||",Eptr,Tptr);}  
    | expr AND_T termino 					{Condptr=crearNodo("&&",Eptr,Tptr);}  
    | expr NOT_T termino 					{Condptr=crearNodo("!",Eptr,Tptr);} 
	; 

expr: expr OP_SUM termino 					{Eptr=crearNodo("+",Eptr,Tptr);}
	| expr OP_MENOS termino 				{Eptr=crearNodo("-",Eptr,Tptr);}
	| termino								{Eptr=Tptr;}
	;

termino : termino OP_MUL factor 			{Tptr=crearNodo("*",Tptr,Fptr);}
		| termino OP_DIVISION factor 		{Tptr=crearNodo("/",Tptr,Fptr);}
		| termino OP_MOD factor 			{;}
		| termino OP_DIV factor 			{;}
		| '-' termino %prec MENOS_UNARIO    {;}
		| factor							{Tptr=Fptr;}				
		;


longitud : LONG {isLong = 1;} PARENT_A CORCH_A lista CORCH_C PARENT_C  {sprintf(str_contLong,"%d",contLong); Longptr=crearNodo("LONGITUD",crearHoja(str_contLong), NULL); insertarInt(&listaSimbolos,str_contLong); isLong = 0;} 
	;

equmax : EQUMAX PARENT_A expr {isEqumax = 1; Equmax=crearNodo(":=",crearHoja("@emax"),Eptr); } SEP_LINEA CORCH_A lista CORCH_C PARENT_C {isEqumin = 0;
																									Equaux2=crearNodo("EQUAUX",Equmax,Nodomax);
																									Nodocond2=crearNodo("==",crearHoja("@emax"),crearHoja("@max"));
																								
																									Nodoif2=crearNodo("IF",Nodocond2,NULL);
																									Equmax=crearNodo("EQUMAX",Equaux2,Nodoif2);
																									
																									}
	;

equmin : EQUMIN PARENT_A expr {isEqumin = 1; Equmin=crearNodo(":=",crearHoja("@emin"),Eptr); } SEP_LINEA CORCH_A lista CORCH_C PARENT_C {isEqumax = 0;																									
																									Equaux=crearNodo("EQUAUX",Equmin,Nodomin);
																									Nodocond=crearNodo("==",crearHoja("@emin"),crearHoja("@min"));
																									Nodoif=crearNodo("IF",Nodocond,NULL);
																									Equmin=crearNodo("EQUMIN",Equaux,Nodoif);
																									
																									}
	;

lista : expr 							{if(isLong)
												{
													 contLong = 1;
													 Lptr = Eptr;	

												}
											if(isEqumin) Nodomin=crearNodo(":=",crearHoja("@min"),Eptr);
											else if(isEqumax) Nodomax=crearNodo(":=",crearHoja("@max"),Eptr);}
       | lista COMA expr  				{if(isLong) 
	   											{
													contLong++;
											
												}
		   									if(isEqumin)
	   											{
													  //Lptr=crearNodo("IF",crearNodo("<",Eptr,Lptr),crearNodo(":=",crearHoja("@min"),Eptr));
													  Lptr=crearNodo(":=",crearHoja("@aux"),Eptr);
													  Nodocond=crearNodo("<",crearHoja("@aux"),crearHoja("@min"));
													  Nodoif=crearNodo("IF",Nodocond,crearNodo(":=",crearHoja("@min"),crearHoja("@aux")));
													  Nodoaux=crearNodo("NODOAUX",Lptr,Nodoif);
													  Nodomin=crearNodo("MIN",Nodomin,Nodoaux);
												}
													   
											else if(isEqumax)
												{
												      Lptr=crearNodo(":=",crearHoja("@aux"),Eptr);
													  Nodocond2=crearNodo(">",crearHoja("@aux"),crearHoja("@max"));
													  Nodoif2=crearNodo("IF",Nodocond2,crearNodo(":=",crearHoja("@max"),crearHoja("@aux")));
													  Nodoaux2=crearNodo("NODOAUX",Lptr,Nodoif2);
													  Nodomax=crearNodo("MAX",Nodomax,Nodoaux2);
												}
											}
	 ;


factor	: PARENT_A expr PARENT_C			{;}
		| numero 							{;}
		| ID_T								{Fptr = crearHoja($1); }							
		;





declaracion:  DIM OP_MENOR dupla_asig OP_MAYOR  	{    
													    char id[100];
													    char auxString[100];
													    char tipoVar[20];
													    while(!pila_vacia(&pilaSint) || !cola_vacia(&cola) )
														{
													        desapilar(&pilaSint, id);
													        desacolar(&cola, tipoVar);
													        insertarID(&listaSimbolos,id,tipoVar);
													    
													    }
													}
              										;   


dupla_asig:  ID_T COMA dupla_asig COMA tipo   {apilar(&pilaSint, $1);}
            |ID_T OP_MAYOR AS OP_MENOR tipo   {apilar(&pilaSint, $1);}
            ;
			

tipo: 	FLOAT_T 	{acolar(&cola, "Float");}
      | INT_T 		{acolar(&cola, "Int");}
      | STRING  	{acolar(&cola, "String");}
	  | CHAR		{acolar(&cola, "Char");}
      ;


%%


int main(int argc, char* argv[])
{

	if((pIntermedia = fopen("Intermedia.txt", "wt")) == NULL)
	{
        printf("\nNo se puede abrir el archivo %s\n", "Intermedia.txt");
    }

    if((yyin = fopen(argv[1],"rt")) == NULL)
    {
        printf("\nNo se puede abrir el archivo %s\n", argv[1]);
    }

    crearLista(&listaSimbolos);
	crearLista(&listaAux);
	crear_pila(&pilaSint);
	crear_cola(&cola);
	
    yyparse();

	eliminarTabla(&listaSimbolos);

    printf("\nCOMPILACION EXITOSA!\n");
	reiniciarPunteros();
	
    fclose(yyin);
	fclose(pIntermedia);
    
    return 0;
}

void generarAssembler(t_arbol* pArbol)
{
	char Linea[300];

	pCode = fopen("Code.asm", "wt");

	pAssembler = fopen("Final.asm", "wt");



	while(recorrerArbol(pArbol,pCode, &listaAux) != pArbol){
		//printf("recorrearArbol generar assembler: %s\n", (*pArbol)->info);
	}
 
	fclose(pCode);

	pCode = fopen("Code.asm", "rt");

	fprintf(pAssembler, "include macros2.asm\ninclude number.asm\n.MODEL LARGE	; Modelo de Memoria\n.386	        ; Tipo de Procesador\n.STACK 200h		; Bytes en el Stack\n\n.DATA \n\n");

	grabarListaEnAssembler(&listaSimbolos, pAssembler);

	grabarListaEnAssembler(&listaAux, pAssembler);

	fprintf(pAssembler, "\n\n.CODE\n\nmov AX,@DATA    ; Inicializa el segmento de datos\nmov DS,AX\nmov es,ax ;\n\n");

	while(fgets(Linea, sizeof(Linea), pCode))
	{
		fprintf(pAssembler, Linea);
	}

	fprintf(pAssembler, "\n\n\nmov ax,4c00h	; Indica que debe finalizar la ejecución\nint 21h\n\nEnd");

	fclose(pCode);

	remove("Code.asm");

	fclose(pAssembler);
}


void reiniciarPunteros(){
Sptr = NULL;
Gptr = NULL;
Aptr = NULL;
Eptr = NULL;
Tptr = NULL;
Fptr = NULL;
Condptr = NULL;
Ifptr = NULL;
Whileptr = NULL;
Cuerpoptr = NULL;
CuerpoWhileptr = NULL;
Trueptr = NULL;
Falseptr = NULL;
 Lptr = NULL;
 Emaxptr = NULL;
 Eminptr = NULL;
 Equmax = NULL;
 Equaux = NULL;
 Equaux2 = NULL;
 Nodocond = NULL;
 Nodocond2 = NULL;
 Nodocuerpo = NULL;
 Nodocuerpo2 = NULL;
 Nodoif = NULL;
 Nodoif2 = NULL;
 Equmin = NULL;
 Nodoaux = NULL;
  Nodoaux2 = NULL;
 Nodomin = NULL;
 Nodomax = NULL;
 Longptr = NULL;
																						
}
