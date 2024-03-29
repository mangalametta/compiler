/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LET = 258,
     BET = 259,
     NE = 260,
     AND = 261,
     OR = 262,
     ASS = 263,
     _BEGIN = 264,
     END = 265,
     MODULE = 266,
     PROCEDURE = 267,
     IF = 268,
     THEN = 269,
     ELSE = 270,
     WHILE = 271,
     DO = 272,
     VAR = 273,
     CONST = 274,
     ARRAY = 275,
     OF = 276,
     PRINT = 277,
     PRINTLN = 278,
     _RETURN = 279,
     READ = 280,
     CONTINUE = 281,
     BREAK = 282,
     INT_TYPE = 283,
     REAL_TYPE = 284,
     STR_TYPE = 285,
     BOOL_TYPE = 286,
     CONST_REAL = 287,
     ID = 288,
     CONST_STR = 289,
     CONST_INT = 290,
     CONST_BOOL = 291,
     UMINUS = 292
   };
#endif
/* Tokens.  */
#define LET 258
#define BET 259
#define NE 260
#define AND 261
#define OR 262
#define ASS 263
#define _BEGIN 264
#define END 265
#define MODULE 266
#define PROCEDURE 267
#define IF 268
#define THEN 269
#define ELSE 270
#define WHILE 271
#define DO 272
#define VAR 273
#define CONST 274
#define ARRAY 275
#define OF 276
#define PRINT 277
#define PRINTLN 278
#define _RETURN 279
#define READ 280
#define CONTINUE 281
#define BREAK 282
#define INT_TYPE 283
#define REAL_TYPE 284
#define STR_TYPE 285
#define BOOL_TYPE 286
#define CONST_REAL 287
#define ID 288
#define CONST_STR 289
#define CONST_INT 290
#define CONST_BOOL 291
#define UMINUS 292




/* Copy the first part of user declarations.  */
#line 1 "modula.y"

    #include <iostream>
    #include <string>
    #include <vector>
    #include <fstream>
    #include "symbol.hpp"
    #include "code.hpp"
    using namespace std;
    /*#define Trace(a) cout << "\033[1;32m" << lineCount+1 << ": "  << a << "\033[0m" << endl; */
    #define Trace(a) ;
    extern "C"
    {
        extern int yylex();
        extern int lineCount;
        void yyerror(const char *s);
    }
    #define CHECK_BiOP(a,b,c) ({\
        if(!is_calc_able(*a,*b)) yyerror("[ERROR]Not calcuable!");\
        Identifier* info = new Identifier();\
        info->val_type = a->val_type;\
        if(a->id_type == const_type && b->id_type == const_type)\
            info->id_type = const_type;\
        else\
            info->id_type = var_type;\
        c = info;\
    })
    vector<string> id_name_list;
    vector<int>* id_type_list;
    vector<int>* invo_type_list;
    vector<int> func_return_stack;
    vector<string> func_name_stack;
    ofstream out;
    string ModuleName;


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 36 "modula.y"
{
  int int_val;
  float real_val;
  bool bool_val;
  std::string* string_val;
  struct Identifier* id_info;
}
/* Line 193 of yacc.c.  */
#line 213 "y.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 226 "y.tab.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   609

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNRULES -- Number of states.  */
#define YYNSTATES  208

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,    47,    42,    40,    52,    41,    45,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    48,
      37,    38,    39,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    50,     2,     2,     2,
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
      35,    36,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,    17,    18,    19,    34,    35,
      36,    49,    50,    51,    62,    65,    66,    68,    70,    72,
      74,    76,    78,    80,    84,    87,    91,    95,    99,   103,
     107,   111,   115,   119,   123,   127,   131,   135,   138,   140,
     142,   144,   146,   148,   150,   152,   153,   154,   166,   167,
     171,   172,   173,   174,   185,   188,   191,   194,   195,   198,
     201,   204,   205,   208,   213,   215,   218,   219,   221,   223,
     225,   227,   233,   239,   251,   254,   255,   258,   259,   263,
     269,   274,   279,   280,   285,   286,   291,   295,   298,   302,
     307,   309,   311,   313,   315,   319,   321,   326,   332,   334,
     335,   339
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    -1,    -1,    11,    33,    56,    77,    83,
       9,    57,    84,    10,    33,    45,    -1,    -1,    -1,    12,
      33,    59,    46,    85,    47,    65,    60,    77,     9,    84,
      10,    33,    48,    -1,    -1,    -1,    12,    33,    61,    49,
      92,    62,    77,     9,    84,    10,    33,    48,    -1,    -1,
      -1,    12,    33,    63,    77,     9,    64,    84,    10,    33,
      48,    -1,    49,    92,    -1,    -1,    86,    -1,    87,    -1,
      68,    -1,    73,    -1,    88,    -1,    67,    -1,    95,    -1,
      46,    67,    47,    -1,    41,    67,    -1,    67,    40,    67,
      -1,    67,    41,    67,    -1,    67,    42,    67,    -1,    67,
      43,    67,    -1,    67,    39,    67,    -1,    67,    37,    67,
      -1,    67,    38,    67,    -1,    67,     4,    67,    -1,    67,
       3,    67,    -1,    67,     5,    67,    -1,    67,     6,    67,
      -1,    67,     7,    67,    -1,    50,    67,    -1,    33,    -1,
      91,    -1,    35,    -1,    32,    -1,    34,    -1,    36,    -1,
      94,    -1,    -1,    -1,    13,    46,    67,    47,    14,    69,
      84,    70,    71,    10,    48,    -1,    -1,    15,    72,    84,
      -1,    -1,    -1,    -1,    16,    74,    46,    67,    47,    75,
      17,    76,    10,    48,    -1,    76,    66,    -1,    76,    27,
      -1,    76,    26,    -1,    -1,    77,    78,    -1,    77,    81,
      -1,    77,    82,    -1,    -1,    18,    79,    -1,    93,    49,
      92,    48,    -1,    82,    -1,    79,    79,    -1,    -1,    35,
      -1,    32,    -1,    34,    -1,    36,    -1,    19,    33,    38,
      80,    48,    -1,    81,    33,    38,    80,    48,    -1,    93,
      49,    20,    51,    67,    52,    67,    53,    21,    92,    48,
      -1,    83,    58,    -1,    -1,    84,    66,    -1,    -1,    33,
      49,    92,    -1,    85,    52,    33,    49,    92,    -1,    33,
       8,    67,    48,    -1,    91,     8,    67,    48,    -1,    -1,
      22,    89,    67,    48,    -1,    -1,    23,    90,    67,    48,
      -1,    25,    33,    48,    -1,    24,    48,    -1,    24,    67,
      48,    -1,    33,    51,    67,    53,    -1,    28,    -1,    29,
      -1,    30,    -1,    31,    -1,    33,    52,    93,    -1,    33,
      -1,    33,    46,    96,    47,    -1,    33,    46,    96,    47,
      48,    -1,    97,    -1,    -1,    97,    52,    67,    -1,    67,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    73,    65,    90,    94,    89,   120,   127,
     119,   143,   150,   142,   168,   173,   177,   181,   185,   189,
     193,   197,   201,   205,   210,   219,   228,   237,   246,   255,
     266,   277,   292,   303,   314,   329,   344,   359,   371,   384,
     389,   400,   408,   419,   430,   438,   441,   437,   449,   449,
     453,   459,   462,   458,   469,   473,   476,   481,   484,   488,
     492,   497,   498,   502,   514,   518,   523,   527,   536,   544,
     553,   563,   570,   577,   587,   592,   593,   598,   599,   610,
     617,   626,   632,   631,   640,   639,   646,   650,   657,   663,
     671,   676,   681,   686,   691,   696,   701,   720,   736,   741,
     745,   750
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LET", "BET", "NE", "AND", "OR", "ASS",
  "_BEGIN", "END", "MODULE", "PROCEDURE", "IF", "THEN", "ELSE", "WHILE",
  "DO", "VAR", "CONST", "ARRAY", "OF", "PRINT", "PRINTLN", "_RETURN",
  "READ", "CONTINUE", "BREAK", "INT_TYPE", "REAL_TYPE", "STR_TYPE",
  "BOOL_TYPE", "CONST_REAL", "ID", "CONST_STR", "CONST_INT", "CONST_BOOL",
  "'<'", "'='", "'>'", "'+'", "'-'", "'*'", "'/'", "UMINUS", "'.'", "'('",
  "')'", "';'", "':'", "'~'", "'['", "','", "']'", "$accept", "program",
  "@1", "@2", "procedure", "@3", "@4", "@5", "@6", "@7", "@8", "opt_type",
  "stmt", "expr", "cond", "@9", "@10", "opt_else", "@11", "loop", "@12",
  "@13", "opt_loop_stmts", "opt_vcs", "var_def", "var_def_cont",
  "const_val", "const_def", "arr_def", "opt_procs", "opt_stmts",
  "formal_args", "var_assign", "arr_assign", "command", "@14", "@15",
  "arr_item", "type", "ids", "func_invo", "proc_invo", "opt_exprs",
  "exprs", 0
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
     285,   286,   287,   288,   289,   290,   291,    60,    61,    62,
      43,    45,    42,    47,   292,    46,    40,    41,    59,    58,
     126,    91,    44,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    56,    57,    55,    59,    60,    58,    61,    62,
      58,    63,    64,    58,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    69,    70,    68,    72,    71,
      71,    74,    75,    73,    76,    76,    76,    76,    77,    77,
      77,    77,    78,    79,    79,    79,    79,    80,    80,    80,
      80,    81,    81,    82,    83,    83,    84,    84,    85,    85,
      86,    87,    89,    88,    90,    88,    88,    88,    88,    91,
      92,    92,    92,    92,    93,    93,    94,    95,    96,    96,
      97,    97
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,    11,     0,     0,    14,     0,     0,
      12,     0,     0,    10,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     0,     0,    11,     0,     3,
       0,     0,     0,    10,     2,     2,     2,     0,     2,     2,
       2,     0,     2,     4,     1,     2,     0,     1,     1,     1,
       1,     5,     5,    11,     2,     0,     2,     0,     3,     5,
       4,     4,     0,     4,     0,     4,     3,     2,     3,     4,
       1,     1,     1,     1,     3,     1,     4,     5,     1,     0,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,    61,    75,    66,     0,    95,
      58,    59,    60,     0,     0,    62,    64,     0,     0,     0,
       0,     3,     0,    74,     0,    65,     0,     0,    94,     0,
      77,    11,     0,    90,    91,    92,    93,     0,    68,    69,
      67,    70,     0,     0,     0,     0,     0,    61,     0,    63,
      71,    72,     0,     0,    51,    82,    84,     0,     0,    41,
      38,    42,    40,    43,     0,     0,     0,    76,    21,    18,
      19,    16,    17,    20,    39,    44,    22,     0,     0,     0,
      38,     0,    39,     0,     0,     0,     0,     0,    87,     0,
       0,     0,    99,     0,    24,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    12,    99,     0,     4,     0,     0,     0,
       0,    88,    86,     0,   101,     0,    98,     0,    23,    33,
      32,    34,    35,    36,    30,    31,    29,    25,    26,    27,
      28,     0,     0,    15,     0,    61,    77,     0,     0,     0,
       0,    83,    85,    80,    96,     0,    89,    81,    78,     0,
       6,     0,     0,     0,    96,     0,    45,    52,    97,   100,
      14,    61,     0,    77,     0,     0,    77,     0,     0,    79,
       0,     0,     0,    46,    57,    77,     0,    13,    73,    50,
       0,     0,     0,    48,     0,     0,    56,    55,    54,     0,
      10,    77,     0,    53,     0,    49,    47,     7
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,    30,    23,    45,   171,    46,   145,    47,
     146,   160,    67,    68,    69,   176,   189,   194,   201,    70,
      85,   177,   190,     6,    10,    25,    42,    11,    12,    13,
      44,   111,    71,    72,    73,    86,    87,    82,    37,    14,
      75,    76,   125,   126
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -137
static const yytype_int16 yypact[] =
{
      -9,   -15,    38,  -137,  -137,  -137,    53,    10,    11,    15,
    -137,    18,  -137,    13,    25,    10,  -137,    34,    46,    10,
      49,  -137,    55,  -137,    69,    10,   113,    61,  -137,    61,
    -137,   -23,    43,  -137,  -137,  -137,  -137,    52,  -137,  -137,
    -137,  -137,    54,    56,   369,    59,    58,  -137,   559,  -137,
    -137,  -137,    70,    62,  -137,  -137,  -137,   540,    76,  -137,
      -1,  -137,  -137,  -137,   559,   559,   559,  -137,   479,  -137,
    -137,  -137,  -137,  -137,   110,  -137,  -137,    93,   150,    -4,
     -40,   125,  -137,    89,   559,    91,   559,   559,  -137,   145,
      87,   559,   559,   559,  -137,   260,   479,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
      96,   -39,  -137,  -137,   559,   559,  -137,   283,   559,   168,
     191,  -137,  -137,   214,   479,   106,    86,    74,  -137,   -10,
     -10,   -10,   471,   490,   -10,   -10,   -10,    -7,    -7,  -137,
    -137,   237,   150,   120,   107,  -137,  -137,   129,   117,   175,
     305,  -137,  -137,  -137,   142,   559,  -137,  -137,  -137,   150,
    -137,   143,    57,   398,  -137,   170,  -137,  -137,  -137,   479,
    -137,  -137,   150,  -137,   166,   150,  -137,   183,    73,  -137,
     427,   153,   154,   521,  -137,  -137,   171,  -137,  -137,   188,
     340,   456,   164,  -137,   203,   167,  -137,  -137,  -137,   181,
    -137,  -137,   174,  -137,   176,   521,  -137,  -137
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,    33,   -45,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,   -46,  -137,   218,   197,  -137,     2,  -137,
    -136,  -137,  -137,  -137,  -137,  -137,  -137,   -44,   -74,     9,
    -137,  -137,   121,  -137
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -9
static const yytype_int16 yytable[] =
{
      74,    79,     1,    81,   112,   113,   114,    91,   143,    16,
     163,    93,    89,   144,     7,     8,    17,    16,     3,    94,
      95,    96,    21,    -5,    17,    22,    -8,    16,    28,     9,
     105,   106,   107,   108,    17,   107,   108,   180,     4,   117,
     183,   119,   120,     9,    18,    92,   123,   124,   127,   191,
      93,    20,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   205,   173,    19,   158,   124,
     148,     7,     8,   150,    24,     7,     8,    97,    98,    99,
     100,   101,   185,    26,    27,   170,     9,    29,    31,    32,
       9,     7,     8,    38,    48,    39,    40,    41,   179,   162,
      49,   182,    50,    83,    51,    77,     9,    78,    84,    90,
     169,   102,   103,   104,   105,   106,   107,   108,   109,    74,
      97,    98,    99,   100,   101,   178,   110,   156,    97,    98,
      99,   100,   101,    32,   116,   122,    74,   118,   155,    74,
     161,    33,    34,    35,    36,   142,    74,    74,    97,    98,
      99,   100,   101,   154,   102,   103,   104,   105,   106,   107,
     108,    74,   102,   103,   104,   105,   106,   107,   108,   159,
     165,    97,    98,    99,   100,   101,   164,   115,    33,    34,
      35,    36,   102,   103,   104,   105,   106,   107,   108,   166,
     168,   175,   172,   121,    97,    98,    99,   100,   101,   181,
     184,   187,   188,   193,   192,   102,   103,   104,   105,   106,
     107,   108,   200,   202,   204,   203,   151,    97,    98,    99,
     100,   101,   206,   198,   207,    15,    43,     0,   102,   103,
     104,   105,   106,   107,   108,   147,     0,     0,     0,   152,
      97,    98,    99,   100,   101,     0,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,   108,     0,     0,
       0,     0,   153,    97,    98,    99,   100,   101,     0,     0,
       0,     0,     0,     0,   102,   103,   104,   105,   106,   107,
     108,     0,     0,     0,     0,   157,    97,    98,    99,   100,
     101,     0,     0,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   108,     0,     0,     0,   128,    97,    98,
      99,   100,   101,     0,     0,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,   108,     0,     0,     0,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,   108,     0,
     195,     0,   167,    53,     0,     0,    54,     0,     0,     0,
       0,     0,    55,    56,    57,    58,   196,   197,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    52,
       0,    64,    53,     0,     0,    54,    65,     0,     0,     0,
      66,    55,    56,    57,    58,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,   174,     0,
      64,    53,     0,     0,    54,    65,     0,     0,     0,    66,
      55,    56,    57,    58,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,   186,     0,    64,
      53,     0,     0,    54,    65,     0,     0,     0,    66,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,   199,     0,    64,    53,
       0,     0,    54,    65,    97,    98,    99,    66,    55,    56,
      57,    58,    97,    98,    99,   100,   101,     0,    59,    60,
      61,    62,    63,    97,    98,    99,   100,    64,     0,     0,
       0,     0,    65,     0,     0,     0,    66,     0,   102,   103,
     104,   105,   106,   107,   108,     0,   102,   103,   104,   105,
     106,   107,   108,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   108,    53,     0,     0,    54,     0,     0,
       0,     0,     0,    55,    56,    57,    58,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
       0,     0,    64,     0,     0,     0,     0,    65,     0,     0,
       0,    66,    59,    80,    61,    62,    63,     0,     0,     0,
       0,    64,     0,     0,     0,     0,    65,     0,    88,     0,
      66,    59,    80,    61,    62,    63,     0,     0,     0,     0,
      64,     0,     0,     0,     0,    65,     0,     0,     0,    66
};

static const yytype_int16 yycheck[] =
{
      44,    47,    11,    48,    78,     9,    46,     8,    47,     7,
     146,    51,    57,    52,    18,    19,     7,    15,    33,    64,
      65,    66,     9,    46,    15,    12,    49,    25,    19,    33,
      40,    41,    42,    43,    25,    42,    43,   173,     0,    84,
     176,    86,    87,    33,    33,    46,    91,    92,    93,   185,
      51,    33,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   201,     9,    52,   142,   114,
     115,    18,    19,   118,    49,    18,    19,     3,     4,     5,
       6,     7,     9,    49,    38,   159,    33,    38,    33,    20,
      33,    18,    19,    32,    51,    34,    35,    36,   172,   145,
      48,   175,    48,    33,    48,    46,    33,    49,    46,    33,
     155,    37,    38,    39,    40,    41,    42,    43,     8,   163,
       3,     4,     5,     6,     7,   171,    33,    53,     3,     4,
       5,     6,     7,    20,    45,    48,   180,    46,    52,   183,
      33,    28,    29,    30,    31,    49,   190,   191,     3,     4,
       5,     6,     7,    47,    37,    38,    39,    40,    41,    42,
      43,   205,    37,    38,    39,    40,    41,    42,    43,    49,
      53,     3,     4,     5,     6,     7,    47,    52,    28,    29,
      30,    31,    37,    38,    39,    40,    41,    42,    43,    14,
      48,    21,    49,    48,     3,     4,     5,     6,     7,    33,
      17,    48,    48,    15,    33,    37,    38,    39,    40,    41,
      42,    43,    48,    10,    33,    48,    48,     3,     4,     5,
       6,     7,    48,   190,    48,     7,    29,    -1,    37,    38,
      39,    40,    41,    42,    43,   114,    -1,    -1,    -1,    48,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    47,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      10,    -1,    47,    13,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    -1,    -1,    10,
      -1,    41,    13,    -1,    -1,    16,    46,    -1,    -1,    -1,
      50,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    -1,    -1,    10,    -1,
      41,    13,    -1,    -1,    16,    46,    -1,    -1,    -1,    50,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    -1,    -1,    10,    -1,    41,
      13,    -1,    -1,    16,    46,    -1,    -1,    -1,    50,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    -1,    -1,    10,    -1,    41,    13,
      -1,    -1,    16,    46,     3,     4,     5,    50,    22,    23,
      24,    25,     3,     4,     5,     6,     7,    -1,    32,    33,
      34,    35,    36,     3,     4,     5,     6,    41,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    13,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    50,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,
      50,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    55,    33,     0,    56,    77,    18,    19,    33,
      78,    81,    82,    83,    93,    79,    82,    93,    33,    52,
      33,     9,    12,    58,    49,    79,    49,    38,    93,    38,
      57,    33,    20,    28,    29,    30,    31,    92,    32,    34,
      35,    36,    80,    80,    84,    59,    61,    63,    51,    48,
      48,    48,    10,    13,    16,    22,    23,    24,    25,    32,
      33,    34,    35,    36,    41,    46,    50,    66,    67,    68,
      73,    86,    87,    88,    91,    94,    95,    46,    49,    77,
      33,    67,    91,    33,    46,    74,    89,    90,    48,    67,
      33,     8,    46,    51,    67,    67,    67,     3,     4,     5,
       6,     7,    37,    38,    39,    40,    41,    42,    43,     8,
      33,    85,    92,     9,    46,    52,    45,    67,    46,    67,
      67,    48,    48,    67,    67,    96,    97,    67,    47,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    49,    47,    52,    62,    64,    96,    67,    47,
      67,    48,    48,    48,    47,    52,    53,    48,    92,    49,
      65,    33,    77,    84,    47,    53,    14,    47,    48,    67,
      92,    60,    49,     9,    10,    21,    69,    75,    77,    92,
      84,    33,    92,    84,    17,     9,    10,    48,    48,    70,
      76,    84,    33,    15,    71,    10,    26,    27,    66,    10,
      48,    72,    10,    48,    33,    84,    48,    48
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 66 "modula.y"
    {   
    push();
    if(insert(*(yyvsp[(2) - (2)].string_val))==-1) yyerror("[Error]Redefine symbol in same scope");
    set_type(*(yyvsp[(2) - (2)].string_val),modu_type,val_void);

    genModuleStart(*(yyvsp[(2) - (2)].string_val));
;}
    break;

  case 3:
#line 73 "modula.y"
    {
    genMainBegin();
;}
    break;

  case 4:
#line 76 "modula.y"
    {
    /* check ID */
    if(*(yyvsp[(2) - (11)].string_val)!= *(yyvsp[(10) - (11)].string_val))yyerror("[Error]Moudle id  dosn't consist");
    /* set type */
    Trace("Derived program");
    cout << "\033[1;35m" << "** program completed ** generated a.jasm" << "\033[0m" << endl;
    pop();

    // main need a return
    genRet(false);
    genMainEnd();
    genModuleEnd();
;}
    break;

  case 5:
#line 90 "modula.y"
    {
    if(insert(*(yyvsp[(2) - (2)].string_val))==-1) yyerror("[Error]Redefine symbol in same scope");
    push();
;}
    break;

  case 6:
#line 94 "modula.y"
    {
    set_id_list(*(yyvsp[(2) - (7)].string_val),id_type_list);
    id_type_list = nullptr;
    func_return_stack.push_back((yyvsp[(7) - (7)].int_val));
    id_name_list.clear();
    /* set type */
    set_type(*(yyvsp[(2) - (7)].string_val),proc_type,(yyvsp[(7) - (7)].int_val));
    Identifier info = get_info(*(yyvsp[(2) - (7)].string_val));
    genProcStart(info);
;}
    break;

  case 7:
#line 104 "modula.y"
    {
    /* check ID */
    if(*(yyvsp[(2) - (14)].string_val)!= *(yyvsp[(13) - (14)].string_val)) yyerror("[Error]Func id  dosn't consist");
    Trace("Derived procedure with formal arguments");
    /* pop return flag */
    func_return_stack.pop_back();
    /* pop symbol table */
    pop();

    /* void func */
    Identifier info = get_info(*(yyvsp[(2) - (14)].string_val));
    if(info.val_type == void_type)
        genRet(false);
    genProcEnd();
;}
    break;

  case 8:
#line 120 "modula.y"
    {
    if(insert(*(yyvsp[(2) - (2)].string_val))==-1) yyerror("[Error]Redefine symbol in same scope");
    /* push symbol table */
    push();
    Identifier info = get_info(*(yyvsp[(2) - (2)].string_val));
    genProcStart(info);
;}
    break;

  case 9:
#line 127 "modula.y"
    {
    set_type(*(yyvsp[(2) - (5)].string_val),proc_type,(yyvsp[(5) - (5)].int_val));
    func_return_stack.push_back((yyvsp[(5) - (5)].int_val));
;}
    break;

  case 10:
#line 131 "modula.y"
    {
    /* check ID */
    if(*(yyvsp[(2) - (12)].string_val) != *(yyvsp[(11) - (12)].string_val)) yyerror("[Error]Func id  dosn't consist");
    Trace("Derived procedure without formal arguments");
    /* pop return flag */
    func_return_stack.pop_back();
    /* pop symbol table */
    pop();

    genProcEnd();
;}
    break;

  case 11:
#line 143 "modula.y"
    {
    if(insert(*(yyvsp[(2) - (2)].string_val))==-1) yyerror("[Error]Redefine symbol in same scope");
    /* push symbol table */
    push();
    Identifier info = get_info(*(yyvsp[(2) - (2)].string_val));
    genProcStart(info);
;}
    break;

  case 12:
#line 150 "modula.y"
    {
    set_type(*(yyvsp[(2) - (5)].string_val),proc_type,val_void);
    func_return_stack.push_back(void_type);
;}
    break;

  case 13:
#line 154 "modula.y"
    {
    /* check ID */
    if(*(yyvsp[(2) - (10)].string_val) != *(yyvsp[(9) - (10)].string_val)) yyerror("[Error]Func id  dosn't consist");
    
    Trace("Derived procedure without formal arguments");
    /* pop return flag */
    func_return_stack.pop_back();
    /* pop symbol table */
    pop();

    genRet(false);
    genProcEnd();
;}
    break;

  case 14:
#line 169 "modula.y"
    {
    (yyval.int_val) = (yyvsp[(2) - (2)].int_val);
;}
    break;

  case 15:
#line 173 "modula.y"
    {
    (yyval.int_val) = void_type;
;}
    break;

  case 16:
#line 178 "modula.y"
    {
    Trace("stmt <- var_assign");
;}
    break;

  case 17:
#line 182 "modula.y"
    {
    Trace("stmt <- arr_assign");
;}
    break;

  case 18:
#line 186 "modula.y"
    {
    Trace("stmt <- cond");
;}
    break;

  case 19:
#line 190 "modula.y"
    {
    Trace("stmt <- loop");
;}
    break;

  case 20:
#line 194 "modula.y"
    {
    Trace("stmt <- command");
;}
    break;

  case 21:
#line 198 "modula.y"
    {
    Trace("stmt <- expr");
;}
    break;

  case 22:
#line 202 "modula.y"
    {

;}
    break;

  case 23:
#line 206 "modula.y"
    {
    Trace("( expr ) <- expr");
    (yyval.id_info) = (yyvsp[(2) - (3)].id_info);
;}
    break;

  case 24:
#line 211 "modula.y"
    {
    Trace("- expr");
    /* check if calc able */
    if(!is_calc_able(*(yyvsp[(2) - (2)].id_info))) yyerror("[Error]Not calcuable!");
    (yyval.id_info) = (yyvsp[(2) - (2)].id_info);

    genCalcOP('m');
;}
    break;

  case 25:
#line 220 "modula.y"
    {
    Trace("expr <- expr + expr");
    /* check if calc able and return */
    CHECK_BiOP((yyvsp[(1) - (3)].id_info),(yyvsp[(3) - (3)].id_info),(yyval.id_info));
    (yyval.id_info) = (yyvsp[(1) - (3)].id_info);

    genCalcOP('+');
;}
    break;

  case 26:
#line 229 "modula.y"
    {
    Trace("expr <- expr - expr");
    /* check if calc able and return */
    CHECK_BiOP((yyvsp[(1) - (3)].id_info),(yyvsp[(3) - (3)].id_info),(yyval.id_info));
    (yyval.id_info) = (yyvsp[(1) - (3)].id_info);

    genCalcOP('-');
;}
    break;

  case 27:
#line 238 "modula.y"
    {
    Trace("expr <- expr * expr");
    /* check if calc able and return */
    CHECK_BiOP((yyvsp[(1) - (3)].id_info),(yyvsp[(3) - (3)].id_info),(yyval.id_info));
    (yyval.id_info) = (yyvsp[(1) - (3)].id_info);

    genCalcOP('*');
;}
    break;

  case 28:
#line 247 "modula.y"
    {
    Trace("expr <- expr / expr");
    /* check if calc able and return */
    CHECK_BiOP((yyvsp[(1) - (3)].id_info),(yyvsp[(3) - (3)].id_info),(yyval.id_info));
    (yyval.id_info) = (yyvsp[(1) - (3)].id_info);

    genCalcOP('/');
;}
    break;

  case 29:
#line 256 "modula.y"
    {
    Trace("expr <- expr > expr");
    /* check if calc able and return */
    CHECK_BiOP((yyvsp[(1) - (3)].id_info),(yyvsp[(3) - (3)].id_info),(yyval.id_info));
    Identifier* info = new Identifier();
    info->val_type = val_bool;
    (yyval.id_info) = info;

    genCondOP(">");
;}
    break;

  case 30:
#line 267 "modula.y"
    {
    Trace("expr <- expr < expr");
    /* check if calc able and return */
    CHECK_BiOP((yyvsp[(1) - (3)].id_info),(yyvsp[(3) - (3)].id_info),(yyval.id_info));
    Identifier* info = new Identifier();
    info->val_type = val_bool;
    (yyval.id_info) = info;

    genCondOP("<");
;}
    break;

  case 31:
#line 278 "modula.y"
    {
    Trace("expr <- expr = expr");
    /* check */
    if((yyvsp[(1) - (3)].id_info)->val_type != val_void) yyerror("[Error]Can not compare different type");
    Identifier* info = new Identifier();
    info->val_type = val_bool;
    if((yyvsp[(1) - (3)].id_info)->id_type == const_type && (yyvsp[(3) - (3)].id_info)->id_type == const_type)
        info->id_type = const_type;
    else
        info->id_type = var_type;
    (yyval.id_info) = info;

    genCondOP("=");
;}
    break;

  case 32:
#line 293 "modula.y"
    {
    Trace("expr <- expr >= expr");
    /* check if calc able and return */
    CHECK_BiOP((yyvsp[(1) - (3)].id_info),(yyvsp[(3) - (3)].id_info),(yyval.id_info));
    Identifier* info = new Identifier();
    info->val_type = val_bool;
    (yyval.id_info) = info;

    genCondOP(">=");
;}
    break;

  case 33:
#line 304 "modula.y"
    {
    Trace("expr <- expr <= expr");
    /* check if calc able and return */
    CHECK_BiOP((yyvsp[(1) - (3)].id_info),(yyvsp[(3) - (3)].id_info),(yyval.id_info));
    Identifier* info = new Identifier();
    info->val_type = val_bool;
    (yyval.id_info) = info;

    genCondOP("<=");
;}
    break;

  case 34:
#line 315 "modula.y"
    {
    Trace("expr <- expr <> expr");
    /* check */
    if((yyvsp[(1) - (3)].id_info)->val_type != (yyvsp[(3) - (3)].id_info)->val_type || (yyvsp[(1) - (3)].id_info)->val_type == val_void || (yyvsp[(3) - (3)].id_info)->val_type == val_void) yyerror("Error Can not compare different type");
    Identifier* info = new Identifier();
    info->val_type = val_bool;
    if((yyvsp[(1) - (3)].id_info)->id_type == const_type && (yyvsp[(3) - (3)].id_info)->id_type == const_type)
        info->id_type = const_type;
    else
        info->id_type = var_type;
    (yyval.id_info) = info;

    genCondOP("<>");
;}
    break;

  case 35:
#line 330 "modula.y"
    {
    Trace("expr <- expr && expr");
    /* check if it is bool */
    if((yyvsp[(1) - (3)].id_info)->val_type != (yyvsp[(3) - (3)].id_info)->val_type || (yyvsp[(1) - (3)].id_info)->val_type == val_void || (yyvsp[(3) - (3)].id_info)->val_type == val_void) yyerror("Error Can not compare different type");
    Identifier* info = new Identifier();
    info->val_type = val_bool;
    if((yyvsp[(1) - (3)].id_info)->id_type == const_type && (yyvsp[(3) - (3)].id_info)->id_type == const_type)
        info->id_type = const_type;
    else
        info->id_type = var_type;
    (yyval.id_info) = info;

    genCalcOP('&');
;}
    break;

  case 36:
#line 345 "modula.y"
    {
    Trace("expr <- expr || expr");
    /* check if it is bool */
    if((yyvsp[(1) - (3)].id_info)->val_type != (yyvsp[(3) - (3)].id_info)->val_type || (yyvsp[(1) - (3)].id_info)->val_type == val_void || (yyvsp[(3) - (3)].id_info)->val_type == val_void) yyerror("Error Can not compare different type");
    Identifier* info = new Identifier();
    info->val_type = val_bool;
    if((yyvsp[(1) - (3)].id_info)->id_type == const_type && (yyvsp[(3) - (3)].id_info)->id_type == const_type)
        info->id_type = const_type;
    else
        info->id_type = var_type;
    (yyval.id_info) = info;

    genCalcOP('|');
;}
    break;

  case 37:
#line 360 "modula.y"
    {
    Trace("expr <- ~expr");
    /* check if it is bool */
    if((yyvsp[(2) - (2)].id_info)->val_type != val_bool) yyerror("[Error]Only bool can do logical operation");
    Identifier* info = new Identifier();
    info->val_type = val_bool;
    info->id_type = (yyvsp[(2) - (2)].id_info)->id_type;
    (yyval.id_info) = info;

    genCalcOP('~');
;}
    break;

  case 38:
#line 372 "modula.y"
    {
    Trace("expr <- ID");
    /* check exist */
    if(lookup(*(yyvsp[(1) - (1)].string_val))==-1)yyerror("[Error]Undefined symbol");
    Identifier* info = new Identifier(get_info(*(yyvsp[(1) - (1)].string_val)));
    (yyval.id_info) = info;

    if(info->id_type == var_type || info->id_type == para_type)
        genGetVar(*info);
    else if(info->id_type == const_type)
        genGetConst(*info);
;}
    break;

  case 39:
#line 385 "modula.y"
    {
    Trace("expr <- arr_item");
    (yyval.id_info) = (yyvsp[(1) - (1)].id_info);
;}
    break;

  case 40:
#line 390 "modula.y"
    {
    Trace("expr <- const_int");
    Identifier* info = new Identifier();
    info->id_type = const_type;
    info->val_type = val_int;
    info->val.ival = (yyvsp[(1) - (1)].int_val);
    (yyval.id_info) = info;

    genGetConst(*info);
;}
    break;

  case 41:
#line 401 "modula.y"
    {
    Trace("expr <- const_real");
    Identifier* info = new Identifier();
    info->id_type = const_type;
    info->val_type = val_real;
    (yyval.id_info) = info;
;}
    break;

  case 42:
#line 409 "modula.y"
    {
    Trace("expr <- const_str");
    Identifier* info = new Identifier();
    info->id_type = const_type;
    info->val_type = val_str;
    info->val.sval = (yyvsp[(1) - (1)].string_val);
    (yyval.id_info) = info;

    genGetConst(*info);
;}
    break;

  case 43:
#line 420 "modula.y"
    {
    Trace("expr <- const_bool");
    Identifier* info = new Identifier();
    info->id_type = const_type;
    info->val_type = val_bool;
    info->val.bval = (yyvsp[(1) - (1)].bool_val);
    (yyval.id_info) = info;

    genGetConst(*info);
;}
    break;

  case 44:
#line 431 "modula.y"
    {
    /* check exist */
    if(lookup((yyvsp[(1) - (1)].id_info)->name)==-1)yyerror("Not defined func");
    Identifier* info = new Identifier(get_info((yyvsp[(1) - (1)].id_info)->name));
    (yyval.id_info) = info;
;}
    break;

  case 45:
#line 438 "modula.y"
    {
    genIfSec();
;}
    break;

  case 46:
#line 441 "modula.y"
    {
    genIfSecEnd();
;}
    break;

  case 47:
#line 444 "modula.y"
    {
    Trace("if statement without else");
    genIfEnd();
;}
    break;

  case 48:
#line 449 "modula.y"
    {
    genElseSec();
    genNOP();
;}
    break;

  case 50:
#line 453 "modula.y"
    {
    genElseSec();
    genNOP();
;}
    break;

  case 51:
#line 459 "modula.y"
    {
    genLoopStart();
;}
    break;

  case 52:
#line 462 "modula.y"
    {
    genLoopBodyStart();
;}
    break;

  case 53:
#line 465 "modula.y"
    {
    Trace("Derived loop");
    genLoopEnd();
;}
    break;

  case 54:
#line 470 "modula.y"
    {

;}
    break;

  case 55:
#line 474 "modula.y"
    {
;}
    break;

  case 56:
#line 477 "modula.y"
    {

;}
    break;

  case 57:
#line 481 "modula.y"
    {

;}
    break;

  case 58:
#line 485 "modula.y"
    {
    Trace("optional variable and const define A");
;}
    break;

  case 59:
#line 489 "modula.y"
    {
    Trace("optional variable and const define B");
;}
    break;

  case 60:
#line 493 "modula.y"
    {
    Trace("optional variable and const define C");
;}
    break;

  case 61:
#line 497 "modula.y"
    {;}
    break;

  case 62:
#line 499 "modula.y"
    {
    Trace("Derived variable define");
;}
    break;

  case 63:
#line 503 "modula.y"
    {
    /* assign type */
    for(int i=0;i<id_name_list.size();++i){
        if(insert(id_name_list[i])==-1) yyerror("[Error]Redefine symbol in same scope");
        set_type(id_name_list[i],var_type,(yyvsp[(3) - (4)].int_val));
        Identifier info = Identifier(get_info(id_name_list[i]));
        genVar(info);
    }
    id_name_list.clear();
    
;}
    break;

  case 64:
#line 515 "modula.y"
    {

;}
    break;

  case 65:
#line 519 "modula.y"
    {

;}
    break;

  case 66:
#line 523 "modula.y"
    {

;}
    break;

  case 67:
#line 528 "modula.y"
    {
    Trace("expr <- const_int");
    Identifier* info = new Identifier();
    info->id_type = const_type;
    info->val_type = val_int;
    info->val.ival = (yyvsp[(1) - (1)].int_val);
    (yyval.id_info) = info;
;}
    break;

  case 68:
#line 537 "modula.y"
    {
    Trace("expr <- const_real");
    Identifier* info = new Identifier();
    info->id_type = const_type;
    info->val_type = val_real;
    (yyval.id_info) = info;
;}
    break;

  case 69:
#line 545 "modula.y"
    {
    Trace("expr <- const_str");
    Identifier* info = new Identifier();
    info->id_type = const_type;
    info->val_type = val_str;
    info->val.sval = (yyvsp[(1) - (1)].string_val);
    (yyval.id_info) = info;
;}
    break;

  case 70:
#line 554 "modula.y"
    {
    Trace("expr <- const_bool");
    Identifier* info = new Identifier();
    info->id_type = const_type;
    info->val_type = val_bool;
    info->val.bval = (yyvsp[(1) - (1)].bool_val);
    (yyval.id_info) = info;
;}
    break;

  case 71:
#line 564 "modula.y"
    {
    Trace("Derived const define");
    if(insert(*(yyvsp[(2) - (5)].string_val))==-1) yyerror("[Error]Redefine symbol in same scope");
    set_type(*(yyvsp[(2) - (5)].string_val),(yyvsp[(4) - (5)].id_info)->id_type,(yyvsp[(4) - (5)].id_info)->val_type);
    set_val(*(yyvsp[(2) - (5)].string_val),(yyvsp[(4) - (5)].id_info)->val);
;}
    break;

  case 72:
#line 571 "modula.y"
    {
    Trace("const_def <- const_def ID = expr;");
    if(insert(*(yyvsp[(2) - (5)].string_val))==-1) yyerror("[Error]Redefine symbol in same scope");
    set_type(*(yyvsp[(2) - (5)].string_val),(yyvsp[(4) - (5)].id_info)->id_type,(yyvsp[(4) - (5)].id_info)->val_type);
    set_val(*(yyvsp[(2) - (5)].string_val),(yyvsp[(4) - (5)].id_info)->val);
;}
    break;

  case 73:
#line 578 "modula.y"
    {
    for(int i=0;i<id_name_list.size();++i){

        if(insert(id_name_list[i])==-1) yyerror("[Error]Redefine symbol in same scope");
        set_type(id_name_list[i],arr_type,(yyvsp[(10) - (11)].int_val));
    }
    id_name_list.clear();
    Trace("Derived array define");
;}
    break;

  case 74:
#line 588 "modula.y"
    {
    Trace("Derived procedures defines");
;}
    break;

  case 75:
#line 592 "modula.y"
    {;}
    break;

  case 76:
#line 594 "modula.y"
    {
    Trace("Derived statements");
;}
    break;

  case 77:
#line 598 "modula.y"
    {;}
    break;

  case 78:
#line 600 "modula.y"
    {
    if(id_type_list == nullptr){
        id_type_list = new vector<int>();
        id_name_list.clear();
    }
    if(insert(*(yyvsp[(1) - (3)].string_val))==-1) yyerror("[Error]Redefine symbol in same scope");
    set_type(*(yyvsp[(1) - (3)].string_val),para_type,(yyvsp[(3) - (3)].int_val));
    id_type_list->push_back((yyvsp[(3) - (3)].int_val));
    Trace("Derived single argment");
;}
    break;

  case 79:
#line 611 "modula.y"
    {
    if(insert(*(yyvsp[(3) - (5)].string_val))==-1) yyerror("[Error]Redefine symbol in same scope");
    set_type(*(yyvsp[(3) - (5)].string_val),para_type,(yyvsp[(5) - (5)].int_val));
    id_type_list->push_back((yyvsp[(5) - (5)].int_val));
    Trace("Derived multiple argument");
;}
    break;

  case 80:
#line 618 "modula.y"
    {
    Trace("Derived variable assignment");
    /* check */
    if(lookup(*(yyvsp[(1) - (4)].string_val))==-1) yyerror("[Error]Undefined symbol");
    Identifier info = get_info(*(yyvsp[(1) - (4)].string_val));
    if(info.id_type != var_type || info.val_type != (yyvsp[(3) - (4)].id_info)->val_type) yyerror("[Error]Can't assign");
    genAssign(info);
;}
    break;

  case 81:
#line 627 "modula.y"
    {
    Trace("arr_assign <- arr_item = expr");
    if((yyvsp[(1) - (4)].id_info)->val_type != (yyvsp[(3) - (4)].id_info)->val_type) yyerror("[Error]Can't assign");
;}
    break;

  case 82:
#line 632 "modula.y"
    {
    genPrintStart();
;}
    break;

  case 83:
#line 635 "modula.y"
    {
    Trace("command <- print expression");
    genPrint((yyvsp[(3) - (4)].id_info)->val_type);
;}
    break;

  case 84:
#line 640 "modula.y"
    {
    genPrintStart();
;}
    break;

  case 85:
#line 643 "modula.y"
    {
    genPrintln((yyvsp[(3) - (4)].id_info)->val_type);
;}
    break;

  case 86:
#line 647 "modula.y"
    {

;}
    break;

  case 87:
#line 651 "modula.y"
    {
    /* check return type */
    if(func_return_stack.back() != void_type) yyerror("[Error]wrong return type");
    
    genRet(false);
;}
    break;

  case 88:
#line 658 "modula.y"
    {
    if(func_return_stack.back() != (yyvsp[(2) - (3)].id_info)->val_type) yyerror("[Error]wrong return type");

    genRet(true);
;}
    break;

  case 89:
#line 664 "modula.y"
    {
    Trace("arr_item <- id[arit_expr]");
    if(lookup(*(yyvsp[(1) - (4)].string_val))==-1) yyerror("[Error]Undefined symbol");
    Identifier info = get_info(*(yyvsp[(1) - (4)].string_val));
    if(info.id_type != arr_type) yyerror("[Error]Not an array");
    (yyval.id_info) = new Identifier(info);
;}
    break;

  case 90:
#line 672 "modula.y"
    {
    Trace("type <- int_type");
    (yyval.int_val) = val_int;
;}
    break;

  case 91:
#line 677 "modula.y"
    {
    Trace("type <- real_type");
    (yyval.int_val) = val_real;
;}
    break;

  case 92:
#line 682 "modula.y"
    {
    Trace("type <- str_type");
    (yyval.int_val) = val_str;
;}
    break;

  case 93:
#line 687 "modula.y"
    {
    Trace("type <- bool_type");
    (yyval.int_val) = val_bool;
;}
    break;

  case 94:
#line 692 "modula.y"
    {
    id_name_list.push_back(*(yyvsp[(1) - (3)].string_val));
    Trace("ids <- ids ID");
;}
    break;

  case 95:
#line 697 "modula.y"
    {
    id_name_list.push_back(*(yyvsp[(1) - (1)].string_val));
    Trace("ids <- ID");
;}
    break;

  case 96:
#line 702 "modula.y"
    {
    Trace("Derive fun invo");
    /* check */

    if(lookup(*(yyvsp[(1) - (4)].string_val))==-1)yyerror("[Error]Undefined symbol");
    Identifier id_data = get_info(*(yyvsp[(1) - (4)].string_val));
    if(id_data.id_type != proc_type) yyerror("[Error]Not a func");
    Identifier* info = new Identifier(get_info(*(yyvsp[(1) - (4)].string_val)));
    (yyval.id_info) = info;
    /* check parameter */
    if(id_data.data.arg_info->size() != invo_type_list->size()) yyerror("[Error]Wrong parameter");
    for(int i=0;i<invo_type_list->size();++i){
        if((*id_data.data.arg_info)[i] != (*invo_type_list)[i]) yyerror("[Error]Wrong parameter");
    }
    invo_type_list = nullptr;

    genProcInvo(*info);
;}
    break;

  case 97:
#line 721 "modula.y"
    {
    /* check */
    if(lookup(*(yyvsp[(1) - (5)].string_val))==-1)yyerror("Not defined var");
    Identifier id_data = get_info(*(yyvsp[(1) - (5)].string_val));
    if(id_data.id_type != proc_type) yyerror("[Error]Not a func");
    /* check parameter */
    if(id_data.data.arg_info->size() != invo_type_list->size()) yyerror("[Error]Wrong parameter");
    for(int i=0;i<invo_type_list->size();++i){
        if((*id_data.data.arg_info)[i] != (*invo_type_list)[i]) yyerror("[Error]Wrong parameter");
    }
    invo_type_list = nullptr;

    genProcInvo(id_data);
;}
    break;

  case 98:
#line 737 "modula.y"
    {

;}
    break;

  case 99:
#line 741 "modula.y"
    {

;}
    break;

  case 100:
#line 746 "modula.y"
    {
    invo_type_list->push_back((yyvsp[(3) - (3)].id_info)->val_type);
    Trace("exprs <- expr,expr");
;}
    break;

  case 101:
#line 751 "modula.y"
    {
    if(invo_type_list == nullptr)
        invo_type_list = new vector<int>();
    invo_type_list->push_back((yyvsp[(1) - (1)].id_info)->val_type);
;}
    break;


/* Line 1267 of yacc.c.  */
#line 2684 "y.tab.cpp"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 757 "modula.y"


void yyerror(const char *s) {
    cerr << "\033[1;31m" << lineCount+1 << ": " << s << "\033[0m" << endl;
    exit(1);
}

int main(void) {
    out.open("a.jasm");
    yyparse();
    return 0;
}
