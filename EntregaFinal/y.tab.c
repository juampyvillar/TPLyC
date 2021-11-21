
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Sintactico.y"

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


/* Line 189 of yacc.c  */
#line 169 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 96 "Sintactico.y"

    /* Aca dentro se definen los campos de la variable yylval */
	char* strVal; 



/* Line 214 of yacc.c  */
#line 328 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 340 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNRULES -- Number of states.  */
#define YYNSTATES  164

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    59,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    14,    17,    19,    21,
      24,    28,    31,    34,    36,    38,    40,    42,    44,    46,
      48,    52,    56,    62,    68,    69,    70,    82,    83,    90,
      91,    98,   101,   104,   107,   109,   111,   113,   119,   120,
     127,   128,   135,   139,   142,   146,   150,   154,   158,   162,
     166,   170,   174,   178,   182,   186,   190,   192,   196,   200,
     204,   208,   211,   213,   214,   222,   223,   233,   234,   244,
     246,   250,   254,   256,   258,   263,   269,   275,   277,   279,
     281
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    62,    -1,    63,    -1,    63,    65,    58,
      -1,    65,    58,    -1,    63,    65,    -1,    65,    -1,    91,
      -1,    63,    91,    -1,    64,    65,    58,    -1,    65,    58,
      -1,    64,    65,    -1,    65,    -1,    66,    -1,    67,    -1,
      73,    -1,    74,    -1,    83,    -1,    68,    -1,    32,    41,
      81,    -1,    32,    41,    75,    -1,     3,    77,    52,    64,
      51,    -1,    29,    77,    52,    64,    51,    -1,    -1,    -1,
      29,    77,    52,    64,    51,    69,    28,    52,    64,    51,
      70,    -1,    -1,    29,    87,    52,    64,    71,    51,    -1,
      -1,    29,    85,    52,    64,    72,    51,    -1,     5,    75,
      -1,     5,    81,    -1,     6,    32,    -1,    27,    -1,    24,
      -1,    25,    -1,    54,    77,    49,    77,    53,    -1,    -1,
      54,    80,    49,    78,    80,    53,    -1,    -1,    54,    80,
      48,    79,    80,    53,    -1,    54,    80,    53,    -1,    50,
      77,    -1,    54,    77,    53,    -1,    81,    42,    82,    -1,
      81,    43,    82,    -1,    81,    45,    82,    -1,    81,    44,
      82,    -1,    81,    46,    82,    -1,    81,    47,    82,    -1,
      81,    48,    82,    -1,    81,    49,    82,    -1,    81,    50,
      82,    -1,    81,    35,    82,    -1,    81,    34,    82,    -1,
      82,    -1,    82,    38,    90,    -1,    82,    37,    90,    -1,
      82,    40,    90,    -1,    82,    36,    90,    -1,    59,    82,
      -1,    90,    -1,    -1,    33,    84,    54,    55,    89,    56,
      53,    -1,    -1,    13,    54,    81,    86,    58,    55,    89,
      56,    53,    -1,    -1,    14,    54,    81,    88,    58,    55,
      89,    56,    53,    -1,    81,    -1,    89,    57,    81,    -1,
      54,    81,    53,    -1,    76,    -1,    32,    -1,    31,    46,
      92,    45,    -1,    32,    57,    92,    57,    93,    -1,    32,
      45,    15,    46,    93,    -1,     8,    -1,     9,    -1,    16,
      -1,    10,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   180,   180,   182,   185,   198,   201,   214,   217,   218,
     223,   227,   230,   237,   242,   243,   244,   245,   246,   247,
     252,   253,   257,   262,   268,   268,   268,   269,   269,   270,
     270,   274,   275,   279,   284,   290,   294,   302,   303,   303,
     304,   304,   305,   306,   307,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   321,   322,   323,   326,   327,   328,
     329,   330,   331,   335,   335,   338,   338,   348,   348,   357,
     365,   392,   393,   394,   401,   416,   417,   421,   422,   423,
     424
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WHILE_T", "ENDWHILE", "DISPLAY", "GET",
  "READ_T", "FLOAT_T", "INT_T", "CHAR", "IN_T", "DO_T", "EQUMAX", "EQUMIN",
  "AS", "STRING", "whitespace", "linefeed", "DIGITO", "LETRA", "COMILLA_D",
  "COMILLA_A", "COMILLA_C", "CONST_INT", "CONST_FLOAT", "OP_AVG",
  "CONST_STRING", "ELSE_T", "IF_T", "ENDIF", "DIM", "ID_T", "LONG",
  "OP_MENOS", "OP_SUM", "OP_DIV", "OP_DIVISION", "OP_MUL", "MENOS_UNARIO",
  "OP_MOD", "OP_ASIG", "OP_DISTINTO", "OP_IGUAL", "OP_MAYORIGUAL",
  "OP_MAYOR", "OP_MENOR", "OP_MENORIGUAL", "OR_T", "AND_T", "NOT_T",
  "LLAVE_C", "LLAVE_A", "PARENT_C", "PARENT_A", "CORCH_A", "CORCH_C",
  "COMA", "SEP_LINEA", "'-'", "$accept", "programa_final", "programa",
  "sentencia", "sentenciaCuerpo", "grammar", "asig", "while", "if", "$@1",
  "$@2", "$@3", "$@4", "display", "get", "const_string_r", "numero",
  "cond_final", "$@5", "$@6", "cond", "expr", "termino", "longitud", "$@7",
  "equmax", "$@8", "equmin", "$@9", "lista", "factor", "declaracion",
  "dupla_asig", "tipo", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,    45
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    63,    63,    63,    63,    63,    63,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      66,    66,    67,    68,    69,    70,    68,    71,    68,    72,
      68,    73,    73,    74,    75,    76,    76,    77,    78,    77,
      79,    77,    77,    77,    77,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    81,    81,    82,    82,    82,
      82,    82,    82,    84,    83,    86,    85,    88,    87,    89,
      89,    90,    90,    90,    91,    92,    92,    93,    93,    93,
      93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     2,     2,     1,     1,     2,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     5,     5,     0,     0,    11,     0,     6,     0,
       6,     2,     2,     2,     1,     1,     1,     5,     0,     6,
       0,     6,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     2,     1,     0,     7,     0,     9,     0,     9,     1,
       3,     3,     1,     1,     4,     5,     5,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    63,     0,     2,
       3,     7,    14,    15,    19,    16,    17,    18,     8,     0,
       0,     0,    35,    36,    34,    73,     0,     0,    31,    72,
      32,    56,    62,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     6,     9,     5,    43,     0,     0,     0,
       0,     0,     0,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    20,     0,
       4,     0,     0,    44,    40,    38,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    71,    55,
      54,    60,    58,    57,    59,    65,    67,     0,    29,    27,
       0,     0,    74,     0,     0,     0,     0,    45,    46,    48,
      47,    49,    50,    51,    52,    53,    22,    12,    11,     0,
       0,    23,     0,     0,     0,     0,    69,     0,    37,     0,
       0,    10,     0,     0,     0,    30,    28,     0,     0,     0,
       0,    41,    39,     0,     0,     0,    77,    78,    80,    79,
      76,    75,    64,    70,     0,     0,     0,     0,     0,     0,
      66,    68,    25,    26
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    86,    87,    12,    13,    14,   134,
     163,   123,   122,    15,    16,    28,    29,    48,   106,   105,
      49,    50,    31,    17,    41,    37,   119,    38,   120,   127,
      32,    18,    66,   150
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -89
static const yytype_int16 yypact[] =
{
     103,   -34,   -10,    13,    -7,   -15,     7,   -89,    79,   -89,
     103,    27,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -34,
      57,     5,   -89,   -89,   -89,   -89,    59,    59,   -89,   -89,
     -16,    88,   -89,   -89,    36,    49,    60,    68,    75,    78,
     -10,    76,   -89,    71,   -89,   -89,   -89,    57,   -11,   -20,
     135,   116,   -23,    91,    59,    59,    63,    63,    63,    63,
      59,    59,   116,   116,   116,   -36,    92,   -89,   -16,    83,
     -89,   118,   -34,   -89,   -89,   -89,   -89,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    21,    82,   -89,    88,
      88,   -89,   -89,   -89,   -89,   -16,   -16,    29,   116,   116,
     126,    78,   -89,    59,    80,    59,    59,    88,    88,    88,
      88,    88,    88,    88,    88,    88,   -89,    86,   -89,    89,
      93,   122,    95,   107,   127,   115,   -16,    -5,   -89,   121,
     123,   -89,   120,   131,   159,   -89,   -89,    84,    84,   136,
      59,   -89,   -89,    59,    59,   138,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -16,    17,    58,   116,   139,   140,    72,
     -89,   -89,   -89,   -89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   -89,   -89,   -60,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   148,   -89,     4,   -89,   -89,
     -69,    -1,   -14,   -89,   -89,   -89,   -89,   -89,   -89,   -88,
      98,   181,    94,    56
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -25
static const yytype_int16 yytable[] =
{
      11,    30,    97,    98,    99,    21,    34,    35,    36,   100,
      43,    54,    55,    53,    22,    23,    19,    24,    54,    55,
      20,   101,    25,    46,     1,    52,     2,     3,    74,    75,
      88,    39,     1,    76,     2,     3,   129,   130,    72,    68,
      89,    90,    73,    19,    26,    33,    71,    20,    40,    27,
       4,   139,   140,     6,     7,   154,   155,    51,     4,    95,
      96,     6,     7,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   157,   140,     1,   104,     2,     3,    42,
     121,    22,    23,    22,    23,    45,   117,    22,    23,    25,
      60,    25,   146,   147,   148,    25,   159,   117,   117,   117,
     149,     4,   126,    61,     6,     7,     1,    19,     2,     3,
      65,    47,    62,    26,   158,   140,    27,    26,    27,     1,
      63,     2,     3,   162,    56,    57,    58,    64,    59,    70,
      69,    59,     4,   128,     5,     6,     7,   102,   103,   153,
     118,   124,   126,   126,   131,     4,   135,   132,     6,     7,
     -24,   133,    54,    55,    91,    92,    93,    94,   136,   117,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    54,
      55,    88,   138,   137,   141,   143,   142,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   144,   145,    67,   152,
     156,    44,   160,   161,   151,   125
};

static const yytype_uint8 yycheck[] =
{
       0,     2,    62,    63,    64,     1,    13,    14,     4,    45,
      10,    34,    35,    27,    24,    25,    50,    27,    34,    35,
      54,    57,    32,    19,     3,    26,     5,     6,    48,    49,
      53,    46,     3,    53,     5,     6,   105,   106,    49,    40,
      54,    55,    53,    50,    54,    32,    47,    54,    41,    59,
      29,    56,    57,    32,    33,   143,   144,    52,    29,    60,
      61,    32,    33,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    51,    56,    57,     3,    72,     5,     6,     0,
      51,    24,    25,    24,    25,    58,    86,    24,    25,    32,
      54,    32,     8,     9,    10,    32,   156,    97,    98,    99,
      16,    29,   103,    54,    32,    33,     3,    50,     5,     6,
      32,    54,    52,    54,    56,    57,    59,    54,    59,     3,
      52,     5,     6,    51,    36,    37,    38,    52,    40,    58,
      54,    40,    29,    53,    31,    32,    33,    45,    55,   140,
      58,    15,   143,   144,    58,    29,    51,    58,    32,    33,
      28,    58,    34,    35,    56,    57,    58,    59,    51,   159,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    34,
      35,    53,    57,    46,    53,    55,    53,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    55,    28,    40,    53,
      52,    10,    53,    53,   138,   101
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,    29,    31,    32,    33,    61,    62,
      63,    65,    66,    67,    68,    73,    74,    83,    91,    50,
      54,    77,    24,    25,    27,    32,    54,    59,    75,    76,
      81,    82,    90,    32,    13,    14,    77,    85,    87,    46,
      41,    84,     0,    65,    91,    58,    77,    54,    77,    80,
      81,    52,    81,    82,    34,    35,    36,    37,    38,    40,
      54,    54,    52,    52,    52,    32,    92,    75,    81,    54,
      58,    81,    49,    53,    48,    49,    53,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    64,    65,    53,    82,
      82,    90,    90,    90,    90,    81,    81,    64,    64,    64,
      45,    57,    45,    55,    77,    79,    78,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    51,    65,    58,    86,
      88,    51,    72,    71,    15,    92,    81,    89,    53,    80,
      80,    58,    58,    58,    69,    51,    51,    46,    57,    56,
      57,    53,    53,    55,    55,    28,     8,     9,    10,    16,
      93,    93,    53,    81,    89,    89,    52,    56,    56,    64,
      53,    53,    51,    70
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 180 "Sintactico.y"
    { printf("Start assembler \n"); mostrarArbolDeIzqADer(&Ptr,pArbol); InOrden(&Ptr, pIntermedia); mostrarArbolDeIzqADer(&Ptr,pArbol); generarAssembler(&Ptr);  printf("Traduccion assembler \n"); printf("\nLa expresion es valida\n");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 182 "Sintactico.y"
    {Ptr=Sptr;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 185 "Sintactico.y"
    { 
													if(Sptr == NULL)
													{
														Sptr=Gptr;
													}
													else
													{
														sprintf(str_sentencias,"Sentencia%d",++contSentencias);
														Sptr=crearNodo(str_sentencias,Sptr,Gptr);}
													;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 198 "Sintactico.y"
    {
													Sptr=Gptr; 
													}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 201 "Sintactico.y"
    { 

													if(Sptr == NULL)
													{
														Sptr=Gptr;
													}
													else
													{
														sprintf(str_sentencias,"Sentencia%d",++contSentencias);
														Sptr=crearNodo(str_sentencias,Sptr,Gptr);}
													
												;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 214 "Sintactico.y"
    {
													Sptr=Gptr;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 217 "Sintactico.y"
    {/*Sptr=crearHoja("Declaracion");*/}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 218 "Sintactico.y"
    {/*sprintf(str_sentencias,"Sentencia%d",++contSentencias);
													Sptr=crearNodo(str_sentencias,Sptr,Gptr);*/}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 223 "Sintactico.y"
    { 
													sprintf(str_cuerpo,"SentenciaCuerpo%d",++contCuerpo);
													SptrCuerpo=crearNodo(str_cuerpo,SptrCuerpo,Gptr);
														}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 227 "Sintactico.y"
    {
													SptrCuerpo=Gptr; 
													}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 230 "Sintactico.y"
    { 
													sprintf(str_cuerpo,"SentenciaCuerpo%d",++contCuerpo);
													SptrCuerpo=crearNodo(str_cuerpo,SptrCuerpo,Gptr);
													
												
															
												;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 237 "Sintactico.y"
    {SptrCuerpo=Gptr; }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 242 "Sintactico.y"
    {printf("\nRegla Asig \n"); Gptr=Aptr;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 243 "Sintactico.y"
    {printf("\nRegla While \n"); ; Gptr=Whileptr;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 244 "Sintactico.y"
    {printf("\nRegla Display \n") ; Gptr=crearNodo("DISPLAY",Dptr,NULL); /*InOrden(&Gptr, pIntermedia); fprintf(pIntermedia, "\n"*/;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 245 "Sintactico.y"
    {printf("\nRegla Get \n");Gptr=crearNodo("GET",Getptr,NULL); /*InOrden(&Gptr, pIntermedia); fprintf(pIntermedia, "\n")*/;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 246 "Sintactico.y"
    {printf("\nRegla Longitud \n"); Gptr=Longptr;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 247 "Sintactico.y"
    {printf("\nRegla If \n"); Gptr=Ifptr;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 252 "Sintactico.y"
    {Aptr=crearNodo(":=",crearHoja((yyvsp[(1) - (3)].strVal)),Eptr); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 253 "Sintactico.y"
    {Aptr=crearNodo(":=",crearHoja((yyvsp[(1) - (3)].strVal)),Cptr);}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 257 "Sintactico.y"
    { 
																	Whileptr=crearNodo("WHILE",Condptr,SptrCuerpo);
																	}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 262 "Sintactico.y"
    {if(isAnd==1){ 
                                                         Ifptr=crearNodo("IF",Condptraux,crearNodo("IF",Condptr,SptrCuerpo));   
													    }else if (isOr==1){
														  Ifptr=crearNodo("IF", Condptr, SptrCuerpo);
														  Ifptr=crearNodo("IF",Condptraux,crearNodo("CUERPO",SptrCuerpo,Ifptr));
														}else Ifptr=crearNodo("IF",Condptr,SptrCuerpo);}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 268 "Sintactico.y"
    {Trueptr=Gptr;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 268 "Sintactico.y"
    {Falseptr=Gptr;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 268 "Sintactico.y"
    {printf("\nELSE\n"); Cuerpoptr=crearNodo("CUERPO",Trueptr,Falseptr); Ifptr=crearNodo("IF",Condptr,Cuerpoptr);  esIf=0;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 269 "Sintactico.y"
    {(Nodoif)->der=SptrCuerpo;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 269 "Sintactico.y"
    {printf("Regla Equmin\n");Ifptr=Equmin ; /*InOrden(&Equmin, pIntermedia); fprintf(pIntermedia, "\n");*/}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 270 "Sintactico.y"
    {(Nodoif2)->der=SptrCuerpo;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 270 "Sintactico.y"
    {printf("Regla Equmax\n");Ifptr=Equmax ;/*InOrden(&Equmax, pIntermedia); fprintf(pIntermedia, "\n");*/}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 274 "Sintactico.y"
    {Dptr=Cptr;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 275 "Sintactico.y"
    {Dptr=Eptr;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 279 "Sintactico.y"
    {Getptr = crearHoja((yyvsp[(2) - (2)].strVal));}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 284 "Sintactico.y"
    {
			insertarString(&listaSimbolos, (yyvsp[(1) - (1)].strVal));
			Cptr = crearHoja((yyvsp[(1) - (1)].strVal));
	}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 291 "Sintactico.y"
    {
			insertarInt(&listaSimbolos, (yyvsp[(1) - (1)].strVal)) ; Fptr = crearHoja((yyvsp[(1) - (1)].strVal));
		}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 295 "Sintactico.y"
    {
			insertarFloat(&listaSimbolos, (yyvsp[(1) - (1)].strVal)); Fptr = crearHoja((yyvsp[(1) - (1)].strVal));
		}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 303 "Sintactico.y"
    { Condptraux=Condptr;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 303 "Sintactico.y"
    {isAnd=1;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 304 "Sintactico.y"
    { Condptraux=Condptr;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 304 "Sintactico.y"
    {isOr=1;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 310 "Sintactico.y"
    {Condptr=crearNodo("!=",Eptr,Tptr);}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 311 "Sintactico.y"
    {Condptr=crearNodo("==",Eptr,Tptr);}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 312 "Sintactico.y"
    {Condptr=crearNodo(">",Eptr,Tptr);}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 313 "Sintactico.y"
    {Condptr=crearNodo(">=",Eptr,Tptr);}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 314 "Sintactico.y"
    {Condptr=crearNodo("<",Eptr,Tptr);}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 315 "Sintactico.y"
    {Condptr=crearNodo("<=",Eptr,Tptr);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 316 "Sintactico.y"
    {Condptr=crearNodo("||",Eptr,Tptr);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 317 "Sintactico.y"
    {Condptr=crearNodo("&&",Eptr,Tptr);}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 318 "Sintactico.y"
    {Condptr=crearNodo("!",Eptr,Tptr);}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 321 "Sintactico.y"
    {Eptr=crearNodo("+",Eptr,Tptr);}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 322 "Sintactico.y"
    {Eptr=crearNodo("-",Eptr,Tptr);}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 323 "Sintactico.y"
    {Eptr=Tptr;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 326 "Sintactico.y"
    {Tptr=crearNodo("*",Tptr,Fptr);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 327 "Sintactico.y"
    {Tptr=crearNodo("/",Tptr,Fptr);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 328 "Sintactico.y"
    {;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 329 "Sintactico.y"
    {;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 330 "Sintactico.y"
    {;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 331 "Sintactico.y"
    {Tptr=Fptr;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 335 "Sintactico.y"
    {isLong = 1;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 335 "Sintactico.y"
    {sprintf(str_contLong,"%d",contLong); Longptr=crearNodo("LONGITUD",crearHoja(str_contLong), NULL); insertarInt(&listaSimbolos,str_contLong); isLong = 0;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 338 "Sintactico.y"
    {isEqumax = 1; Equmax=crearNodo(":=",crearHoja("@emax"),Eptr); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 338 "Sintactico.y"
    {isEqumin = 0;
																									Equaux2=crearNodo("EQUAUX",Equmax,Nodomax);
																									Nodocond2=crearNodo("==",crearHoja("@emax"),crearHoja("@max"));
																								
																									Nodoif2=crearNodo("IF",Nodocond2,NULL);
																									Equmax=crearNodo("EQUMAX",Equaux2,Nodoif2);
																									
																									}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 348 "Sintactico.y"
    {isEqumin = 1; Equmin=crearNodo(":=",crearHoja("@emin"),Eptr); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 348 "Sintactico.y"
    {isEqumax = 0;																									
																									Equaux=crearNodo("EQUAUX",Equmin,Nodomin);
																									Nodocond=crearNodo("==",crearHoja("@emin"),crearHoja("@min"));
																									Nodoif=crearNodo("IF",Nodocond,NULL);
																									Equmin=crearNodo("EQUMIN",Equaux,Nodoif);
																									
																									}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 357 "Sintactico.y"
    {if(isLong)
												{
													 contLong = 1;
													 Lptr = Eptr;	

												}
											if(isEqumin) Nodomin=crearNodo(":=",crearHoja("@min"),Eptr);
											else if(isEqumax) Nodomax=crearNodo(":=",crearHoja("@max"),Eptr);}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 365 "Sintactico.y"
    {if(isLong) 
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
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 392 "Sintactico.y"
    {;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 393 "Sintactico.y"
    {;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 394 "Sintactico.y"
    {Fptr = crearHoja((yyvsp[(1) - (1)].strVal)); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 401 "Sintactico.y"
    {    
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
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 416 "Sintactico.y"
    {apilar(&pilaSint, (yyvsp[(1) - (5)].strVal));}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 417 "Sintactico.y"
    {apilar(&pilaSint, (yyvsp[(1) - (5)].strVal));}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 421 "Sintactico.y"
    {acolar(&cola, "Float");}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 422 "Sintactico.y"
    {acolar(&cola, "Int");}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 423 "Sintactico.y"
    {acolar(&cola, "String");}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 424 "Sintactico.y"
    {acolar(&cola, "Char");}
    break;



/* Line 1455 of yacc.c  */
#line 2321 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 428 "Sintactico.y"



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

