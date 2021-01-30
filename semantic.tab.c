/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "semantic.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "defs.h"
  #include "symtab.h"
  #include "codegen.h"
  
  int yyparse(void);
  int yylex(void);
  int yyerror(char *s);
  void warning(char *s);

  extern int yylineno;
  int out_lin = 0;
  char char_buffer[CHAR_BUFFER_LENGTH];
  int error_count = 0;
  int warning_count = 0;
  int var_num = 0;
  int fun_idx = -1;
  int fcall_idx = -1;
  int par_num = 1;
  int type;
  int i = 0;
  int br_arg = 0;
  int tip = 0;
  int simidx = 0;
  int varijabla_inc = 0;
  int tip_check_exp = 0;
  int lab_num = -1;
  int loop_num = -1;
  int when_num = -1;
  int glob_num = 0;
  int inc_idx = 0;
  int duzina = 0; 
  int ch_ex = -1;
  int is_it_ce = -1;
  int E_exit = -1;
  int iz2 = 0;
  int ce_num = -1;
  int niz[10];
  int dec[10];
  int poziv[10];
  int ret = 0;
  int provjera_num = 0;
  int whenzaskok = 0;
  int alone = 0;
  int otherwise = 0;
  int x = 0;
  int is_inc = 0;
  int is_dec = 0;
  int red_check_literala = 1;
  FILE *output;

#line 125 "semantic.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SEMANTIC_TAB_H_INCLUDED
# define YY_YY_SEMANTIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNC = 258,
    LOOPL = 259,
    LOOPR = 260,
    LOOP = 261,
    PUKA = 262,
    MANAWA = 263,
    HOPAU = 264,
    CHECK = 265,
    WHEN = 266,
    BREAK = 267,
    OTHERWISE = 268,
    INUM = 269,
    UINUM = 270,
    RETURN = 271,
    TYPE = 272,
    IF = 273,
    ELSE = 274,
    ID = 275,
    EQ_OP = 276,
    REL_OP = 277,
    ADD_SUB = 278,
    LBRA = 279,
    RBRA = 280,
    LCURLYBRA = 281,
    RCURLYBRA = 282,
    SEMI = 283,
    COMMA = 284,
    INC = 285,
    DEC = 286,
    EC = 287,
    QM = 288,
    DT = 289,
    ONLY_IF = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 56 "semantic.y"

  int i;
  char *s;

#line 218 "semantic.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SEMANTIC_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   141

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

#define YYUNDEFTOK  2
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   103,   103,   102,   114,   116,   115,   135,   136,   144,
     145,   150,   149,   177,   178,   181,   192,   206,   218,   205,
     232,   233,   238,   237,   246,   245,   258,   257,   272,   273,
     283,   284,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   301,   300,   346,   345,   360,   359,   375,   377,   376,
     384,   385,   385,   397,   396,   419,   424,   418,   437,   454,
     470,   474,   525,   526,   573,   572,   588,   590,   594,   595,
     597,   596,   608,   613,   618,   619,   620,   624,   638,   651,
     653,   659,   658,   679,   680,   697,   706,   720,   725,   724,
     754,   759,   764,   753,   796,   806,   812
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNC", "LOOPL", "LOOPR", "LOOP", "PUKA",
  "MANAWA", "HOPAU", "CHECK", "WHEN", "BREAK", "OTHERWISE", "INUM",
  "UINUM", "RETURN", "TYPE", "IF", "ELSE", "ID", "EQ_OP", "REL_OP",
  "ADD_SUB", "LBRA", "RBRA", "LCURLYBRA", "RCURLYBRA", "SEMI", "COMMA",
  "INC", "DEC", "EC", "QM", "DT", "ONLY_IF", "$accept", "program", "$@1",
  "globals", "$@2", "m", "function_list", "function", "$@3", "parametri",
  "xx", "body", "$@4", "$@5", "variable_list", "variable_decl", "$@6",
  "more", "$@7", "$@8", "x", "statement_list", "statement", "check", "$@9",
  "check_body", "$@10", "$@11", "break_part", "$@12", "otherwise_part",
  "$@13", "void_call", "$@14", "loop", "@15", "$@16", "decrement",
  "increment", "compound_statement", "assignment_statement", "exp",
  "condition_exp", "$@17", "iz", "ex", "$@18", "ix", "decs", "ids",
  "literal", "function_call", "$@19", "argument", "lit", "if_else", "$@20",
  "if_part", "@21", "$@22", "$@23", "rel_exp", "return", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290
};
# endif

#define YYPACT_NINF (-96)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-82)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -96,    50,    47,   -96,     3,    63,   -96,    53,    63,   -96,
      51,    54,   -96,    21,    45,   -96,   -96,   -96,   -96,   -96,
      55,    58,    57,    56,    49,   -96,    59,    65,   -96,   -96,
      60,    66,   -96,   -96,   -96,   -96,    64,    22,   -96,    23,
      80,    67,    29,    68,    16,   -96,    62,   -96,   -96,    69,
     -96,   -96,   -96,   -96,   -96,   -96,    71,   -96,    72,   -96,
      74,    82,    75,    76,    -8,   -96,   -10,   -96,   -96,   -96,
     -96,   -96,    -8,    70,    73,    78,     1,   -96,   -96,   -96,
      21,   -96,   -96,   -96,   -96,    24,    79,    36,   -96,    -8,
     -96,    -8,     6,   -96,   -96,    -8,   -96,    22,   -96,    72,
      81,    83,   -96,   -96,   -96,   -96,   -96,    -8,    -8,   -96,
      84,   -96,    40,   -96,   -96,    87,    86,    77,   -96,   -96,
     -96,    88,    90,    87,    91,    92,   -96,    -8,     4,    85,
     -96,    -5,   -96,    87,    95,    21,    28,   -96,    89,   -96,
      22,    97,    93,    21,    94,   100,    -5,   -96,   104,   -96,
      96,   -96,   -96,   -96,   105,    22,   -96,    99,    -8,   101,
      22,   110,   -96,   -96,   -96,   -96,   101,   107,   106,   -96,
     111,   -96,   115,   130,   108,   -96
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     5,     0,     3,     9,
       7,     0,    10,     0,     0,    11,    79,    80,     8,     6,
       0,    13,     0,     0,    14,    15,     0,     0,    20,    12,
       0,    17,    16,    22,    30,    21,     0,    18,    24,     0,
       0,     0,     0,     0,    53,    30,     0,    31,    39,     0,
      38,    36,    35,    32,    33,    34,    87,    40,    28,    23,
       0,     0,     0,    70,     0,    95,     0,    69,    62,    68,
      72,    90,     0,     0,     0,     0,     0,    19,    37,    88,
       0,    25,    26,    55,    41,    74,     0,     0,    64,     0,
      96,     0,     0,    59,    58,    83,    60,     0,    29,    28,
       0,     0,    78,    77,    71,    76,    75,    83,     0,    73,
       0,    63,     0,    91,    61,    85,     0,    84,    89,    27,
      30,     0,     0,    94,     0,     0,    54,     0,     0,     0,
      82,     0,    92,    86,     0,     0,    50,    66,     0,    67,
       0,     0,     0,     0,     0,     0,     0,    93,     0,    43,
       0,    51,    42,    65,     0,     0,    45,     0,     0,    47,
       0,     0,    52,    56,    48,    44,    47,     0,     0,    46,
       0,    49,     0,     0,     0,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   129,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
      17,   -44,   -95,   -96,   -96,   -96,   -96,   -96,   -61,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -19,   -39,   -96,   -96,    -7,    52,   -96,   -96,   -96,   -96,
     -13,   -96,   -96,    33,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -87,   -96
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     5,     2,    10,    14,     8,     9,    20,    23,
      24,    29,    34,    46,    31,    35,    36,    39,    58,    99,
      81,    37,    47,    48,   101,   136,   155,   160,   165,   168,
     145,   157,    49,    75,    50,   100,   167,    51,    52,    53,
      54,   112,    67,   110,   138,    68,    85,   104,   105,   106,
      69,    70,    86,   116,   117,    55,    97,    56,    91,   125,
     140,    88,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    76,   118,    66,   113,    40,    16,    17,    40,    16,
      17,    41,    63,    89,    41,   137,    64,    42,    90,    43,
      42,    44,    43,     6,    44,    87,    40,    45,    96,    89,
      45,   134,    41,    92,   114,    16,    17,    72,    42,   143,
      43,   144,    44,    16,    17,   147,    73,    74,    45,    63,
       3,    59,    60,    64,   102,   103,   115,    65,   108,    89,
     159,   109,   108,    89,     4,   166,     7,    98,   115,   123,
      11,   163,    13,    19,    15,    22,   128,    25,    27,    21,
      32,    26,    30,    33,    38,    28,    61,    83,   133,    77,
      79,    62,    71,    80,    82,    84,   135,    78,    93,   141,
     -81,    94,    95,   107,   148,   169,   127,   120,   121,   124,
      89,   126,   154,   164,   129,   130,   119,   132,   139,   161,
     172,   173,   142,   146,   131,   149,   151,   152,   156,   158,
     150,    72,   170,   139,   171,   174,   175,    12,   162,   153,
     122,   111
};

static const yytype_uint8 yycheck[] =
{
      13,    45,    97,    42,    91,     4,    14,    15,     4,    14,
      15,    10,    20,    23,    10,    20,    24,    16,    28,    18,
      16,    20,    18,    20,    20,    64,     4,    26,    27,    23,
      26,    27,    10,    72,    28,    14,    15,    21,    16,    11,
      18,    13,    20,    14,    15,   140,    30,    31,    26,    20,
       0,    28,    29,    24,    30,    31,    95,    28,    22,    23,
     155,    25,    22,    23,    17,   160,     3,    80,   107,   108,
      17,   158,    21,    28,    20,    17,   120,    20,    29,    24,
      20,    25,    17,    17,    20,    26,     6,     5,   127,    27,
      19,    24,    24,    21,    20,    20,    11,    28,    28,     4,
      24,    28,    24,    24,     7,   166,    29,    26,    25,    25,
      23,    25,     8,    12,    26,    25,    99,    25,   131,    20,
       9,     6,   135,    34,    33,    32,    32,    27,    32,    24,
     143,    21,    25,   146,    28,     5,    28,     8,   157,   146,
     107,    89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    37,    39,     0,    17,    38,    20,     3,    42,    43,
      40,    17,    43,    21,    41,    20,    14,    15,    86,    28,
      44,    24,    17,    45,    46,    20,    25,    29,    26,    47,
      17,    50,    20,    17,    48,    51,    52,    57,    20,    53,
       4,    10,    16,    18,    20,    26,    49,    58,    59,    68,
      70,    73,    74,    75,    76,    91,    93,    98,    54,    28,
      29,     6,    24,    20,    24,    28,    77,    78,    81,    86,
      87,    24,    21,    30,    31,    69,    57,    27,    28,    19,
      21,    56,    20,     5,    20,    82,    88,    77,    97,    23,
      28,    94,    77,    28,    28,    24,    27,    92,    86,    55,
      71,    60,    30,    31,    83,    84,    85,    24,    22,    25,
      79,    81,    77,    97,    28,    77,    89,    90,    58,    56,
      26,    25,    89,    77,    25,    95,    25,    29,    57,    26,
      25,    33,    25,    77,    27,    11,    61,    20,    80,    86,
      96,     4,    86,    11,    13,    66,    34,    58,     7,    32,
      86,    32,    27,    80,     8,    62,    32,    67,    24,    58,
      63,    20,    76,    97,    12,    64,    58,    72,    65,    64,
      25,    28,     9,     6,     5,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    38,    37,    39,    40,    39,    41,    41,    42,
      42,    44,    43,    45,    45,    46,    46,    48,    49,    47,
      50,    50,    52,    51,    54,    53,    55,    53,    56,    56,
      57,    57,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    60,    59,    62,    61,    63,    61,    64,    65,    64,
      66,    67,    66,    69,    68,    71,    72,    70,    73,    74,
      75,    76,    77,    77,    79,    78,    80,    80,    81,    81,
      82,    81,    81,    81,    83,    83,    83,    84,    85,    86,
      86,    88,    87,    89,    89,    90,    90,    91,    92,    91,
      94,    95,    96,    93,    97,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     0,     6,     0,     2,     1,
       2,     0,     8,     0,     1,     2,     4,     0,     0,     6,
       0,     2,     0,     4,     0,     3,     0,     5,     0,     2,
       0,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     0,     9,     0,     6,     0,     7,     0,     0,     3,
       0,     0,     4,     0,     5,     0,     0,    18,     3,     3,
       3,     4,     1,     3,     0,     8,     1,     1,     1,     1,
       0,     3,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     0,     5,     0,     1,     1,     3,     1,     0,     4,
       0,     0,     0,     8,     3,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 103 "semantic.y"
                {
			for(int i = 0; i < 10; i++){niz[i] = 0;dec[i] = 0;poziv[i] = 0;}
		}
#line 1519 "semantic.tab.c"
    break;

  case 3:
#line 106 "semantic.y"
                {
			
        		if(lookup_symbol("main", FUN) == -1)
          			err("undefined reference to 'main'");
     		}
#line 1529 "semantic.tab.c"
    break;

  case 5:
#line 116 "semantic.y"
                { 
			type = (yyvsp[-1].i);
			if(lookup_symbol((yyvsp[0].s), GLOB) == NO_INDEX){
	           		insert_symbol((yyvsp[0].s), GLOB, (yyvsp[-1].i), glob_num, NO_ATR,NO_VAL);
	           		glob_num++;
	           		if(get_type(lookup_symbol((yyvsp[0].s),GLOB)) == 3){
					warn("Variables can not be void!");
				}
	       	}else {
	           		err("redefinition of '%s'", (yyvsp[0].s));  
	           	}
	        simidx = lookup_symbol((yyvsp[0].s), GLOB);
	        code("\n%s:", get_name(simidx));
	        code("\n\t\tWORD \t1");
		}
#line 1549 "semantic.tab.c"
    break;

  case 8:
#line 137 "semantic.y"
                {
			if(type != get_type((yyvsp[0].i)))
          		  err("incompatible types in assignment");
		}
#line 1558 "semantic.tab.c"
    break;

  case 11:
#line 150 "semantic.y"
                {
      		  fun_idx = lookup_symbol((yyvsp[0].s), FUN);
     		   if(fun_idx == NO_INDEX)
     		     fun_idx = insert_symbol((yyvsp[0].s), FUN, (yyvsp[-1].i), NO_ATR, NO_ATR, NO_VAL);
     		   else 
    		      err("redefinition of function '%s'", (yyvsp[0].s));
    		   code("\n%s:", (yyvsp[0].s));
        	   code("\n\t\tPUSH\t%%14");
	           code("\n\t\tMOV \t%%15,%%14");
      		}
#line 1573 "semantic.tab.c"
    break;

  case 12:
#line 161 "semantic.y"
                {
       		clear_symbols(fun_idx + 1);
       		var_num = 0;
       		par_num = 1;
       		br_arg = 0;
       		i = 0;
       		ret = 0;
       		code("\n@%s_exit:", (yyvsp[-5].s));
        		code("\n\t\tMOV \t%%14,%%15");
		        code("\n\t\tPOP \t%%14");
        		code("\n\t\tRET");
      		}
#line 1590 "semantic.tab.c"
    break;

  case 13:
#line 177 "semantic.y"
                        { set_atr1(fun_idx, 0); }
#line 1596 "semantic.tab.c"
    break;

  case 15:
#line 182 "semantic.y"
                {
				
		
        		insert_symbol((yyvsp[0].s), PAR, (yyvsp[-1].i), par_num, NO_ATR,NO_VAL);
        		set_atr1(fun_idx, par_num++);
        		set_atr2(fun_idx, (yyvsp[-1].i), i++);
        		
        		if(get_type(lookup_symbol((yyvsp[0].s),PAR)) == 3)
				warn("Parameters can not be void!");
      		}
#line 1611 "semantic.tab.c"
    break;

  case 16:
#line 193 "semantic.y"
                {
		
			insert_symbol((yyvsp[0].s), PAR, (yyvsp[-1].i), par_num, NO_ATR,NO_VAL);
        		set_atr1(fun_idx, par_num++);
        		set_atr2(fun_idx, (yyvsp[-1].i), i++);
			
			if(lookup_symbol((yyvsp[0].s),PAR) == 3)
				warn("Parameters can not be void!");
		}
#line 1625 "semantic.tab.c"
    break;

  case 17:
#line 206 "semantic.y"
                {
			if(var_num)
				code("\n\t\tSUBS\t%%15,$%d,%%15", 4*var_num);
			code("\n@%s_body:", get_name(fun_idx));
			for(int i = 0; i <= get_last_element(); i++){
				if((get_kind(i) == VAR || get_kind(i) == GLOB) && get_atr2(i , 0) != 0){
					gen_mov(get_atr2(i,0), i);
					set_atr2(i, 0, 0);
				}	
			}
		}
#line 1641 "semantic.tab.c"
    break;

  case 18:
#line 218 "semantic.y"
                {
			for(int i = 0; i <= get_last_element(); i++){
				if((get_kind(i) == VAR) && get_vr(i) == NO_VAL){//dodala sam vr u tabelu simbola 
					err("variable %s without value!", get_name(i));
				}
			}
			if((get_type(fun_idx) != 3) && (ret == 0)){
				err("Non void function does not have return value!");
			}
		}
#line 1656 "semantic.tab.c"
    break;

  case 22:
#line 238 "semantic.y"
                {
			type = (yyvsp[0].i);
		}
#line 1664 "semantic.tab.c"
    break;

  case 24:
#line 246 "semantic.y"
                {
		if(lookup_symbol((yyvsp[0].s), VAR|PAR) == NO_INDEX){
	           insert_symbol((yyvsp[0].s), VAR, type, ++var_num, NO_ATR,NO_VAL);
	           if(get_type(lookup_symbol((yyvsp[0].s),VAR)) == 3){
				warn("Variables can not be void!");
		}
	        }else {
	           err("redefinition of '%s'", (yyvsp[0].s));}
		simidx = lookup_symbol((yyvsp[0].s), VAR|PAR);
		}
#line 1679 "semantic.tab.c"
    break;

  case 26:
#line 258 "semantic.y"
                { 
	        if(lookup_symbol((yyvsp[0].s), VAR|PAR) == NO_INDEX){
	           insert_symbol((yyvsp[0].s), VAR, type, ++var_num, NO_ATR,NO_VAL);
	           if(get_type(lookup_symbol((yyvsp[0].s),VAR)) == 3){
				warn("Variables can not be void!");
		}
	        }else {
	           err("redefinition of '%s'", (yyvsp[0].s));  }
	        simidx = lookup_symbol((yyvsp[0].s), VAR|PAR);
		}
#line 1694 "semantic.tab.c"
    break;

  case 29:
#line 274 "semantic.y"
                {
		if(type != get_type((yyvsp[0].i)))
          		  err("incompatible types in assignment");
          	set_vr(simidx, VAL);
          	set_atr2(simidx, (yyvsp[0].i), 0);
		}
#line 1705 "semantic.tab.c"
    break;

  case 41:
#line 301 "semantic.y"
                {
			tip_check_exp = lookup_symbol((yyvsp[0].s),VAR);
			if(lookup_symbol((yyvsp[0].s), VAR) == NO_INDEX)
        		  err("'%s' undeclared", (yyvsp[0].s));
        		if(get_vr(lookup_symbol((yyvsp[0].s), VAR)) == NO_VAL){//dodala sam vr u tabelu simbola 
				err("variable %s without value!", get_name(lookup_symbol((yyvsp[0].s), VAR) ));
			}
			code("\n\t\tJMP \t@provjera%d", provjera_num);
        		 
		}
#line 1720 "semantic.tab.c"
    break;

  case 42:
#line 312 "semantic.y"
                {
			
			if(otherwise == 0){
				code("\n\t\tJMP \t@check_exit%d", ch_ex + 1);
			}
			code("\n@provjera%d:", provjera_num++);
			int p = 1;
			for(int l = 0; l <= get_last_element(); l++){//da bi mi ispravnim redom generisalo provjeru za literale
				for(int i = 0; i <= get_last_element(); i++){		
					if((get_atr1(i) == p) && (get_kind(i) == LIT)){
						gen_cmp(tip_check_exp, i);
							code("\n\t\tJEQ \t@when%d", whenzaskok++);
					}
				}
				p++;
			}
			p = 1;
			for(int i = 0; i <= get_last_element(); i++){		
				if((get_atr1(i) == 1) && (get_kind(i) == LIT)){
					set_atr1(i,0);
				}
				red_check_literala = 1;
			}
			if(otherwise == 1){
				code("\n\t\tJMP \t@otherwise%d", whenzaskok++);
			}
			otherwise = 0;
			code("\n@check_exit%d:", ++ch_ex);
			
		}
#line 1755 "semantic.tab.c"
    break;

  case 43:
#line 346 "semantic.y"
                {
		
			if(get_type((yyvsp[-1].i)) != get_type(tip_check_exp))
				err("Different types in check and when!");			
			for(int i = 0; i <= get_last_element(); i++){
				if((get_atr1(i) == 1) && (get_name(i) == get_name((yyvsp[-1].i)))){
					err("Can not make double value in with");
				}
			}
			set_check((yyvsp[-1].i),red_check_literala++);
			code("\n@when%d:", ++when_num);
		}
#line 1772 "semantic.tab.c"
    break;

  case 45:
#line 360 "semantic.y"
                {
			if(get_type((yyvsp[-1].i)) != get_type(tip_check_exp))
				err("Different types in check and when!");
			for(int i = 0; i <= get_last_element(); i++){		
				if((get_atr1(i) == 1) && (get_name(i) == get_name((yyvsp[-1].i)))){
					err("Can not make double value in with");
				}
			}
			set_check((yyvsp[-1].i),red_check_literala++);
			code("\n@when%d:", ++when_num);
		}
#line 1788 "semantic.tab.c"
    break;

  case 48:
#line 377 "semantic.y"
                {
			code("\n\t\tJMP \t@check_exit%d", ch_ex + 1);
		}
#line 1796 "semantic.tab.c"
    break;

  case 51:
#line 385 "semantic.y"
                              {
			code("\n@otherwise%d:", ++when_num);
			otherwise = 1;
		}
#line 1805 "semantic.tab.c"
    break;

  case 52:
#line 390 "semantic.y"
                {
			code("\n\t\tJMP \t@check_exit%d", ch_ex + 1);
		}
#line 1813 "semantic.tab.c"
    break;

  case 53:
#line 397 "semantic.y"
                {
        		fcall_idx = lookup_symbol((yyvsp[0].s), FUN);
        		if(fcall_idx == NO_INDEX)
      			  err("'%s' is not a function", (yyvsp[0].s));
      			if(get_type(fcall_idx) != 3)
				warn("Non void function!");
      			
      		}
#line 1826 "semantic.tab.c"
    break;

  case 54:
#line 406 "semantic.y"
                {
       		 if(get_atr1(fcall_idx) != (yyvsp[-1].i))
      			    err("wrong number of args to function '%s'", get_name(fcall_idx));      			          			 	
      			 code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
	        if((yyvsp[-1].i) > 0)
        	  code("\n\t\t\tADDS\t%%15,$%d,%%15", (yyvsp[-1].i) * 4);
      			set_type(FUN_REG, get_type(fcall_idx));
        		(yyval.i) = FUN_REG;//voidcall napravi 
      		}
#line 1840 "semantic.tab.c"
    break;

  case 55:
#line 419 "semantic.y"
                {
			(yyval.i) = ++loop_num;
        		code("\n@loop%d:", loop_num);
		}
#line 1849 "semantic.tab.c"
    break;

  case 56:
#line 424 "semantic.y"
                {
			code("\n\t\t%s\t@false%d", jumps[(yyvsp[0].i)], (yyvsp[-8].i));//jumps jer skace na petlju kad uslov nije ispunjen
			code("\n@true%d:", (yyvsp[-8].i));
		}
#line 1858 "semantic.tab.c"
    break;

  case 57:
#line 429 "semantic.y"
                {
		 	code("\n\t\tJMP \t@loop%d", (yyvsp[-14].i));
        		code("\n@false%d:", (yyvsp[-14].i));
       		(yyval.i) = (yyvsp[-14].i);
		}
#line 1868 "semantic.tab.c"
    break;

  case 58:
#line 438 "semantic.y"
                {
			
			int t1 = get_type(lookup_symbol((yyvsp[-2].s),VAR|PAR|GLOB));
			code("\n\t\t%s\t", ar_instructions[1 + (t1 - 1) * AROP_NUMBER]);
		        gen_sym_name(lookup_symbol((yyvsp[-2].s),VAR|PAR|GLOB));
		        code(",");
		        code("$1");
		        code(",");
		        free_if_reg(lookup_symbol((yyvsp[-2].s),VAR|PAR|GLOB));
		        (yyval.i) = take_reg();
		        gen_sym_name(lookup_symbol((yyvsp[-2].s),VAR|PAR|GLOB));
		        set_type((yyval.i), t1);
		}
#line 1886 "semantic.tab.c"
    break;

  case 59:
#line 455 "semantic.y"
                {
			int t1 = get_type(lookup_symbol((yyvsp[-2].s),VAR|PAR|GLOB));
			code("\n\t\t%s\t", ar_instructions[0 + (t1 - 1) * AROP_NUMBER]);
		        gen_sym_name(lookup_symbol((yyvsp[-2].s),VAR|PAR|GLOB));
		        code(",");
		        code("$1");
		        code(",");
		        free_if_reg(lookup_symbol((yyvsp[-2].s),VAR|PAR|GLOB));
		        (yyval.i) = take_reg();
		        gen_sym_name(lookup_symbol((yyvsp[-2].s),VAR|PAR|GLOB));
		        set_type((yyval.i), t1);
		}
#line 1903 "semantic.tab.c"
    break;

  case 61:
#line 475 "semantic.y"
                 {
        		int idx = lookup_symbol((yyvsp[-3].s), VAR|PAR|GLOB);
        		if(idx == NO_INDEX)
        		  err("invalid lvalue '%s' in assignment", (yyvsp[-3].s));
        		else
          		if(get_type(idx) != get_type((yyvsp[-1].i)))
          		  err("incompatible types in assignment");
          		set_vr(idx, VAL);
          		int reg;
          		if(is_inc == 1 || is_dec == 1){
          		reg = take_reg();
          			gen_mov((yyvsp[-1].i),reg);
          		}else{
          			gen_mov((yyvsp[-1].i), idx);
          		}
          		for(int j = 0; j < 10; j++){//inkrement obavi tek kada rez smjestis u id
		        	if(niz[j] == 0 && dec[j] == 0){
		        		break;
		        	}
		        	int v = niz[j];
		        	int t1 = get_type(v); 
		        	if(dec[j] == 0){ 
        		code("\n\t\t%s\t", ar_instructions[0 + (t1 - 1) * AROP_NUMBER]);
        		}else{
        			code("\n\t\t%s\t", ar_instructions[1 + (t1 - 1) * AROP_NUMBER]);
        		}
		        gen_sym_name(v);
		        code(",");
		        code("$1");
		        code(",");
		        gen_sym_name(v);
		        free_if_reg(v);
		        v = take_reg();
		        
		        set_type(v, t1);
		        }
		        for(int j = 0; j < 10; j++){
		        	niz[j] = 0;
		        	dec[j] = 0;
		        }
		        duzina = 0;
		        if(is_inc == 1 || is_dec == 1){
		        	gen_mov(reg, idx);
		        	is_inc = 0;
		        	is_dec = 0;
		        }
      		}
#line 1955 "semantic.tab.c"
    break;

  case 63:
#line 527 "semantic.y"
                {
		        
		        if(get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i)))
		          err("invalid operands: arithmetic operation");
		          (yyval.i) = take_reg();//da ako imam check exp stavi oboje u isti registar zbog kasnijeg smjestanja rezultata
		         
		         
		         if(is_it_ce == 1){
			         code("\n@expression%d:", ++ce_num);
			         int t1 = get_type((yyvsp[-2].i));    
        			code("\n\t\t%s\t", ar_instructions[(yyvsp[-1].i) + (t1 - 1) * AROP_NUMBER]);
			        gen_sym_name((yyvsp[-2].i));
			        code(",");
			        gen_sym_name(iz2);
			        code(",");
			        free_if_reg(iz2);
			        free_if_reg((yyvsp[-2].i));
			        //$$ = take_reg();
			        gen_sym_name((yyval.i));
		    	    	set_type((yyval.i), t1);
			        
			        code("\n\t\tJMP \t@expression_exit%d", ++E_exit);
			        code("\n@expression%d:", ++ce_num);
			        
		         }
		        int t1 = get_type((yyvsp[-2].i));    
        		code("\n\t\t%s\t", ar_instructions[(yyvsp[-1].i) + (t1 - 1) * AROP_NUMBER]);
		        gen_sym_name((yyvsp[-2].i));
		        code(",");
		        gen_sym_name((yyvsp[0].i));
		        code(",");
		        free_if_reg((yyvsp[0].i));
		        free_if_reg((yyvsp[-2].i));
		        
		        gen_sym_name((yyval.i));
		        set_type((yyval.i), t1);
		        
		        if(is_it_ce == 1){
		        	code("\n@expression_exit%d:", E_exit);
		        	is_it_ce = -1;
		        }
		}
#line 2002 "semantic.tab.c"
    break;

  case 64:
#line 573 "semantic.y"
                {
			code("\n\t\t%s\t@expression%d", opp_jumps[(yyvsp[0].i)], ce_num + 2);//ce_num + 2 jer ce uvijek krajnja labela biti + 2 u odnosu na pocetnu
      		  	
		}
#line 2011 "semantic.tab.c"
    break;

  case 65:
#line 578 "semantic.y"
                {
			is_it_ce = 1;
			
			iz2 = (yyvsp[-2].i);
			
			(yyval.i) = (yyvsp[0].i);
		}
#line 2023 "semantic.tab.c"
    break;

  case 66:
#line 589 "semantic.y"
                {(yyval.i) = lookup_symbol((yyvsp[0].s), VAR|PAR|GLOB);}
#line 2029 "semantic.tab.c"
    break;

  case 70:
#line 597 "semantic.y"
                {
			varijabla_inc = lookup_symbol((yyvsp[0].s),VAR|PAR|GLOB);
			inc_idx = lookup_symbol((yyvsp[0].s), VAR|PAR|GLOB);
		}
#line 2038 "semantic.tab.c"
    break;

  case 71:
#line 602 "semantic.y"
                {
        		(yyval.i) = lookup_symbol((yyvsp[-2].s), VAR|PAR|GLOB);
        		if((yyval.i) == NO_INDEX)
        		  err("'%s' undeclared", (yyvsp[-2].s)); 

      		}
#line 2049 "semantic.tab.c"
    break;

  case 72:
#line 609 "semantic.y"
                 {
        		(yyval.i) = take_reg();
		        gen_mov(FUN_REG, (yyval.i));
      		}
#line 2058 "semantic.tab.c"
    break;

  case 73:
#line 614 "semantic.y"
                { (yyval.i) = (yyvsp[-1].i); }
#line 2064 "semantic.tab.c"
    break;

  case 77:
#line 625 "semantic.y"
                {
		if(get_kind(varijabla_inc) != PAR){
			if(get_vr(varijabla_inc) == NO_VAL)
				err("can not increment variable vithout value");
			}	
			niz[duzina] = inc_idx;
			dec[duzina] = inc_idx;
			duzina++;
			is_dec = 1;
		}
#line 2079 "semantic.tab.c"
    break;

  case 78:
#line 639 "semantic.y"
                {
			if(get_kind(varijabla_inc) != PAR){
			if(get_vr(varijabla_inc) == NO_VAL)
				err("can not increment variable vithout value");
			}	
			niz[duzina] = inc_idx;
			duzina++;
			is_inc = 1;
		}
#line 2093 "semantic.tab.c"
    break;

  case 79:
#line 652 "semantic.y"
                { (yyval.i) = insert_literal((yyvsp[0].s), INT); }
#line 2099 "semantic.tab.c"
    break;

  case 80:
#line 654 "semantic.y"
                { (yyval.i) = insert_literal((yyvsp[0].s), UINT); }
#line 2105 "semantic.tab.c"
    break;

  case 81:
#line 659 "semantic.y"
                {
        		fcall_idx = lookup_symbol((yyvsp[0].s), FUN);
        		if(fcall_idx == NO_INDEX)
      			  err("'%s' is not a function", (yyvsp[0].s));
      		}
#line 2115 "semantic.tab.c"
    break;

  case 82:
#line 665 "semantic.y"
                {
       		 if(get_atr1(fcall_idx) != (yyvsp[-1].i))
      			    err("wrong number of args to function '%s'", get_name(fcall_idx));   
      			 code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
	        
		        if((yyvsp[-1].i) > 0)
        		  code("\n\t\t\tADDS\t%%15,$%d,%%15", (yyvsp[-1].i) * 4);
      			set_type(FUN_REG, get_type(fcall_idx));
        		(yyval.i) = FUN_REG;
      		}
#line 2130 "semantic.tab.c"
    break;

  case 83:
#line 679 "semantic.y"
                { (yyval.i) = 0; }
#line 2136 "semantic.tab.c"
    break;

  case 84:
#line 681 "semantic.y"
                {
			x--;	//jer je x povecano i poslije zadnjeg argumenta, znaci za 1 je veci od broja argumenata!
			for(int j = x; j >= 0; j--){
	      			code("\n\t\t\tPUSH\t");
	      			gen_sym_name(poziv[j]);
	      			printf("%d", poziv[j]);
      				poziv[j] = 0;
      		}
      		
      			x = 0;
			(yyval.i) = br_arg;
			br_arg = 0;
		}
#line 2154 "semantic.tab.c"
    break;

  case 85:
#line 698 "semantic.y"
                { 
      		if(get_atr2(fcall_idx, br_arg) != get_type((yyvsp[0].i)))
        		err("incompatible type for argument in '%s'",get_name(fcall_idx));
        	free_if_reg((yyvsp[0].i));
      		(yyval.i) = br_arg++;
      		poziv[x] = (yyvsp[0].i);
      		x++;
    		}
#line 2167 "semantic.tab.c"
    break;

  case 86:
#line 708 "semantic.y"
                {
		if(get_atr2(fcall_idx, br_arg) != get_type((yyvsp[0].i)))
        		err("incompatible type for argument in '%s'",get_name(fcall_idx));
        	
         	free_if_reg((yyvsp[0].i));
      		poziv[x] = (yyvsp[0].i);
      		x++;
      		(yyval.i) = br_arg++;					
		}
#line 2181 "semantic.tab.c"
    break;

  case 87:
#line 721 "semantic.y"
                 { 
		
		 code("\n@exit%d:", (yyvsp[0].i)); }
#line 2189 "semantic.tab.c"
    break;

  case 88:
#line 725 "semantic.y"
                {
		 for(int j = 0; j < 10; j++){//u slucaju if/else ako ima inkrement u rel/op onda da poveca tek kad udje u if else
		        	if(niz[j] == 0){
		        		break;
		        	}
		        	int v = niz[j];
		        	int t1 = get_type(v);  
        		code("\n\t\t%s\t", ar_instructions[0 + (t1 - 1) * AROP_NUMBER]);
		        gen_sym_name(v);
		        code(",");
		        code("$1");
		        code(",");
		        gen_sym_name(v);
		        free_if_reg(v);
		        v = take_reg();
		        
		        set_type(v, t1);
		        }
		        for(int j = 0; j < 10; j++){
		        	niz[j] = 0;
		        }
		        duzina = 0;
		}
#line 2217 "semantic.tab.c"
    break;

  case 89:
#line 749 "semantic.y"
                 { code("\n@exit%d:", (yyvsp[-3].i)); }
#line 2223 "semantic.tab.c"
    break;

  case 90:
#line 754 "semantic.y"
                {
     		  (yyval.i) = ++lab_num;
      		  code("\n@if%d:", lab_num);
      		}
#line 2232 "semantic.tab.c"
    break;

  case 91:
#line 759 "semantic.y"
                {
      		  code("\n\t\t%s\t@false%d", opp_jumps[(yyvsp[0].i)], (yyvsp[-1].i));
      		  code("\n@true%d:", (yyvsp[-1].i));
      		}
#line 2241 "semantic.tab.c"
    break;

  case 92:
#line 764 "semantic.y"
                {
      		 for(int j = 0; j < 10; j++){
		        	if(niz[j] == 0){
		        		break;
		        	}
		        	int v = niz[j];
		        	int t1 = get_type(v);  
        		code("\n\t\t%s\t", ar_instructions[0 + (t1 - 1) * AROP_NUMBER]);
		        gen_sym_name(v);
		        code(",");
		        code("$1");
		        code(",");
		        gen_sym_name(v);
		        free_if_reg(v);
		        v = take_reg();
		        
		        set_type(v, t1);
		        }
		        for(int j = 0; j < 10; j++){
		        	niz[j] = 0;
		        }
		        duzina = 0;
      		}
#line 2269 "semantic.tab.c"
    break;

  case 93:
#line 788 "semantic.y"
                 {
       		 code("\n\t\tJMP \t@exit%d", (yyvsp[-5].i));
       		 code("\n@false%d:", (yyvsp[-5].i));
       		 (yyval.i) = (yyvsp[-5].i);
      		}
#line 2279 "semantic.tab.c"
    break;

  case 94:
#line 797 "semantic.y"
                {
        		if(get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i)))
        		  err("invalid operands: relational operator");
        		(yyval.i) = (yyvsp[-1].i) + ((get_type((yyvsp[-2].i)) - 1) * RELOP_NUMBER);
		        gen_cmp((yyvsp[-2].i), (yyvsp[0].i));
      		}
#line 2290 "semantic.tab.c"
    break;

  case 95:
#line 807 "semantic.y"
                {
			if(get_type(fun_idx) != 3)
				err("Non void function does not have return value!");		
			ret++;
		}
#line 2300 "semantic.tab.c"
    break;

  case 96:
#line 813 "semantic.y"
                {
			if(get_type(fun_idx) == 3)
				err("Void function should not have return value!");
      			if(get_type(fun_idx) != get_type((yyvsp[-1].i)))
        		  err("incompatible types in return");
        		 else
        		 	ret++;
        		//print_symtab();
        		gen_mov((yyvsp[-1].i), FUN_REG);
        		code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));
		}
#line 2316 "semantic.tab.c"
    break;


#line 2320 "semantic.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 826 "semantic.y"

int yyerror(char *s) {
  fprintf(stderr, "\nline %d: ERROR: %s", yylineno, s);
  error_count++;
  return 0;
}

void warning(char *s) {
  fprintf(stderr, "\nline %d: WARNING: %s", yylineno, s);
  warning_count++;
}

int main() {
  int synerr;
  init_symtab();
  output = fopen("output.asm", "w+");

  synerr = yyparse();

  clear_symtab();
  fclose(output);
    
  if(warning_count)
    printf("\n%d warning(s).\n", warning_count);

  if(error_count)
    printf("\n%d error(s).\n", error_count);

  if(synerr)
    return -1;  //syntax error
  else if(error_count)
    return error_count & 127; //semantic errors
  else if(warning_count)
    return (warning_count & 127) + 127; //warnings
  else
    return 0; //OK
}
