
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     WHILE_T = 258,
     ENDWHILE = 259,
     DISPLAY = 260,
     GET = 261,
     READ_T = 262,
     FLOAT_T = 263,
     INT_T = 264,
     CHAR = 265,
     IN_T = 266,
     DO_T = 267,
     EQUMAX = 268,
     EQUMIN = 269,
     AS = 270,
     STRING = 271,
     whitespace = 272,
     linefeed = 273,
     DIGITO = 274,
     LETRA = 275,
     COMILLA_D = 276,
     COMILLA_A = 277,
     COMILLA_C = 278,
     CONST_INT = 279,
     CONST_FLOAT = 280,
     OP_AVG = 281,
     CONST_STRING = 282,
     ELSE_T = 283,
     IF_T = 284,
     ENDIF = 285,
     DIM = 286,
     ID_T = 287,
     LONG = 288,
     OP_MENOS = 289,
     OP_SUM = 290,
     OP_DIV = 291,
     OP_DIVISION = 292,
     OP_MUL = 293,
     MENOS_UNARIO = 294,
     OP_MOD = 295,
     OP_ASIG = 296,
     OP_DISTINTO = 297,
     OP_IGUAL = 298,
     OP_MAYORIGUAL = 299,
     OP_MAYOR = 300,
     OP_MENOR = 301,
     OP_MENORIGUAL = 302,
     OR_T = 303,
     AND_T = 304,
     NOT_T = 305,
     LLAVE_C = 306,
     LLAVE_A = 307,
     PARENT_C = 308,
     PARENT_A = 309,
     CORCH_A = 310,
     CORCH_C = 311,
     COMA = 312,
     SEP_LINEA = 313
   };
#endif
/* Tokens.  */
#define WHILE_T 258
#define ENDWHILE 259
#define DISPLAY 260
#define GET 261
#define READ_T 262
#define FLOAT_T 263
#define INT_T 264
#define CHAR 265
#define IN_T 266
#define DO_T 267
#define EQUMAX 268
#define EQUMIN 269
#define AS 270
#define STRING 271
#define whitespace 272
#define linefeed 273
#define DIGITO 274
#define LETRA 275
#define COMILLA_D 276
#define COMILLA_A 277
#define COMILLA_C 278
#define CONST_INT 279
#define CONST_FLOAT 280
#define OP_AVG 281
#define CONST_STRING 282
#define ELSE_T 283
#define IF_T 284
#define ENDIF 285
#define DIM 286
#define ID_T 287
#define LONG 288
#define OP_MENOS 289
#define OP_SUM 290
#define OP_DIV 291
#define OP_DIVISION 292
#define OP_MUL 293
#define MENOS_UNARIO 294
#define OP_MOD 295
#define OP_ASIG 296
#define OP_DISTINTO 297
#define OP_IGUAL 298
#define OP_MAYORIGUAL 299
#define OP_MAYOR 300
#define OP_MENOR 301
#define OP_MENORIGUAL 302
#define OR_T 303
#define AND_T 304
#define NOT_T 305
#define LLAVE_C 306
#define LLAVE_A 307
#define PARENT_C 308
#define PARENT_A 309
#define CORCH_A 310
#define CORCH_C 311
#define COMA 312
#define SEP_LINEA 313




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 96 "Sintactico.y"

    /* Aca dentro se definen los campos de la variable yylval */
	char* strVal; 



/* Line 1676 of yacc.c  */
#line 175 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


