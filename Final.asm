include macros2.asm
include number.asm
.MODEL LARGE	; Modelo de Memoria
.386	        ; Tipo de Procesador
.STACK 200h		; Bytes en el Stack

.DATA 

_1                            dd                            1.00                          ;Cte en formato  Int
_10                           dd                            10.00                         ;Cte en formato  Int
_100                          dd                            100.00                        ;Cte en formato  Int
_111                          dd                            111.00                        ;Cte en formato  Int
_3                            dd                            3.00                          ;Cte en formato  Int
_30                           dd                            30.00                         ;Cte en formato  Int
_7                            dd                            7.00                          ;Cte en formato  Int
_Lenguajes y Compiladores     dd                            Lenguajes y Compiladores      ;Cte en formato  String
a                             dd                            ?                             ;Variable Int
cadena                        dd                            ?                             ;Variable String
x                             dd                            ?                             ;Variable Int
y                             dd                            ?                             ;Variable Int
@Aux1                         dd                            ?                             ;Variable Float
@Aux2                         dd                            ?                             ;Variable Float
@Aux3                         dd                            ?                             ;Variable Float
@Aux4                         dd                            ?                             ;Variable Float


.CODE

mov AX,@DATA    ; Inicializa el segmento de datos
mov DS,AX
mov es,ax ;

FLD b
FSTP a
FFREE
FLD c
FLD 7
FMUL 
FSTP @Aux1
FFREE
FLD @Aux1
FSTP a
FFREE
FLD id2
FLD cte1
FMUL 
FSTP @Aux2
FFREE
FLD @Aux2
FLD cte2
FADD 
FSTP @Aux3
FFREE
FLD @Aux3
FSTP id1
FFREE
FLD a
FCOMP b
FSTSW ax
SAHF
JNA saltoelse1
FLD 30
FSTP var2
FFREE
saltoelse1
FFREE
FLD b
FLD 3
FMUL 
FSTP @Aux4
FFREE
FLD a
FCOMP @Aux4
FSTSW ax
SAHF
JNBE saltoelse2
FLD a
FSTP var1
FFREE
JMP fin_if1
saltoelse2
FLD b
FSTP var1
FFREE
fin_if1
displayString Lenguajes y Compiladores
displayString cadena
FLD var
FSTP @emax
FFREE
FLD 100
FSTP @max
FFREE
FLD 111
FSTP @aux
FFREE
FLD @aux
FCOMP @max
FSTSW ax
SAHF
JNA saltoelse5
FLD @aux
FSTP @max
FFREE
saltoelse5
FFREE
FLD var1
FSTP @aux
FFREE
FLD @aux
FCOMP @max
FSTSW ax
SAHF
JNA saltoelse6
FLD @aux
FSTP @max
FFREE
saltoelse6
FFREE
FLD @emax
FCOMP @max
FSTSW ax
SAHF
JNE saltoelse7
FLD var
FSTP maximo
FFREE
saltoelse7
FFREE
FLD var
FSTP @emin
FFREE
FLD 100
FSTP @min
FFREE
FLD 111
FSTP @aux
FFREE
FLD @aux
FCOMP @min
FSTSW ax
SAHF
JNB saltoelse8
FLD @aux
FSTP @min
FFREE
saltoelse8
FFREE
FLD var1
FSTP @aux
FFREE
FLD @aux
FCOMP @min
FSTSW ax
SAHF
JNB saltoelse9
FLD @aux
FSTP @min
FFREE
saltoelse9
FFREE
FLD @emin
FCOMP @min
FSTSW ax
SAHF
JNE saltoelse10
FLD var
FSTP minimo
FFREE
saltoelse10
FFREE



mov ax,4c00h	; Indica que debe finalizar la ejecución
int 21h

End