/* A Bison parser, made by GNU Bison 3.7.1.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "c.y"


#include <stdio.h>
#include "ast.h"


Node* astRoot = NULL;
int yyerror(char * s);
extern int yylex(void);


#line 83 "c.tab.c"

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

#include "c.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_END = 3,                        /* END  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_WHILE = 5,                      /* WHILE  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_STRING_LITERAL = 10,            /* STRING_LITERAL  */
  YYSYMBOL_ASSIGN = 11,                    /* ASSIGN  */
  YYSYMBOL_ADD = 12,                       /* ADD  */
  YYSYMBOL_BOOL = 13,                      /* BOOL  */
  YYSYMBOL_IDENTIFIER = 14,                /* IDENTIFIER  */
  YYSYMBOL_AND = 15,                       /* AND  */
  YYSYMBOL_BVAL = 16,                      /* BVAL  */
  YYSYMBOL_CEIL = 17,                      /* CEIL  */
  YYSYMBOL_CLPAR = 18,                     /* CLPAR  */
  YYSYMBOL_COLON = 19,                     /* COLON  */
  YYSYMBOL_COMMA = 20,                     /* COMMA  */
  YYSYMBOL_CRPAR = 21,                     /* CRPAR  */
  YYSYMBOL_DIV = 22,                       /* DIV  */
  YYSYMBOL_DO = 23,                        /* DO  */
  YYSYMBOL_EQUAL = 24,                     /* EQUAL  */
  YYSYMBOL_FLOOR = 25,                     /* FLOOR  */
  YYSYMBOL_FUN = 26,                       /* FUN  */
  YYSYMBOL_GE = 27,                        /* GE  */
  YYSYMBOL_GT = 28,                        /* GT  */
  YYSYMBOL_ID = 29,                        /* ID  */
  YYSYMBOL_IVAL = 30,                      /* IVAL  */
  YYSYMBOL_LE = 31,                        /* LE  */
  YYSYMBOL_MUL = 32,                       /* MUL  */
  YYSYMBOL_NOT = 33,                       /* NOT  */
  YYSYMBOL_OR = 34,                        /* OR  */
  YYSYMBOL_READ = 35,                      /* READ  */
  YYSYMBOL_RPAR = 36,                      /* RPAR  */
  YYSYMBOL_RVAL = 37,                      /* RVAL  */
  YYSYMBOL_REAL = 38,                      /* REAL  */
  YYSYMBOL_PRINT = 39,                     /* PRINT  */
  YYSYMBOL_SEMICOLON = 40,                 /* SEMICOLON  */
  YYSYMBOL_SIZE = 41,                      /* SIZE  */
  YYSYMBOL_SLPAR = 42,                     /* SLPAR  */
  YYSYMBOL_SRPAR = 43,                     /* SRPAR  */
  YYSYMBOL_SUB = 44,                       /* SUB  */
  YYSYMBOL_THEN = 45,                      /* THEN  */
  YYSYMBOL_VAR = 46,                       /* VAR  */
  YYSYMBOL_LPAR = 47,                      /* LPAR  */
  YYSYMBOL_LT = 48,                        /* LT  */
  YYSYMBOL_BEGINN = 49,                    /* BEGINN  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_prog = 51,                      /* prog  */
  YYSYMBOL_block = 52,                     /* block  */
  YYSYMBOL_declarations = 53,              /* declarations  */
  YYSYMBOL_declaration = 54,               /* declaration  */
  YYSYMBOL_var_declaration = 55,           /* var_declaration  */
  YYSYMBOL_type = 56,                      /* type  */
  YYSYMBOL_array_dimensions = 57,          /* array_dimensions  */
  YYSYMBOL_fun_declaration = 58,           /* fun_declaration  */
  YYSYMBOL_fun_block = 59,                 /* fun_block  */
  YYSYMBOL_param_list = 60,                /* param_list  */
  YYSYMBOL_parameters = 61,                /* parameters  */
  YYSYMBOL_more_parameters = 62,           /* more_parameters  */
  YYSYMBOL_basic_declaration = 63,         /* basic_declaration  */
  YYSYMBOL_basic_array_dimensions = 64,    /* basic_array_dimensions  */
  YYSYMBOL_program_body = 65,              /* program_body  */
  YYSYMBOL_fun_body = 66,                  /* fun_body  */
  YYSYMBOL_prog_stmts = 67,                /* prog_stmts  */
  YYSYMBOL_prog_stmt = 68,                 /* prog_stmt  */
  YYSYMBOL_identifier = 69,                /* identifier  */
  YYSYMBOL_expr = 70,                      /* expr  */
  YYSYMBOL_bint_term = 71,                 /* bint_term  */
  YYSYMBOL_bint_factor = 72,               /* bint_factor  */
  YYSYMBOL_compare_op = 73,                /* compare_op  */
  YYSYMBOL_int_expr = 74,                  /* int_expr  */
  YYSYMBOL_addop = 75,                     /* addop  */
  YYSYMBOL_int_term = 76,                  /* int_term  */
  YYSYMBOL_mulop = 77,                     /* mulop  */
  YYSYMBOL_int_factor = 78,                /* int_factor  */
  YYSYMBOL_modifier_list = 79,             /* modifier_list  */
  YYSYMBOL_arguments = 80,                 /* arguments  */
  YYSYMBOL_more_arguments = 81             /* more_arguments  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   136

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   106,   106,   111,   116,   117,   122,   123,   128,   132,
     133,   134,   138,   139,   144,   149,   154,   159,   160,   164,
     165,   169,   173,   174,   178,   182,   186,   187,   191,   192,
     193,   194,   195,   196,   202,   206,   207,   211,   212,   216,
     217,   218,   222,   223,   224,   225,   226,   230,   231,   235,
     236,   240,   241,   245,   246,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   263,   264,   268,   269,   273,
     274
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "END", "INT", "WHILE",
  "FLOAT", "IF", "ELSE", "RETURN", "STRING_LITERAL", "ASSIGN", "ADD",
  "BOOL", "IDENTIFIER", "AND", "BVAL", "CEIL", "CLPAR", "COLON", "COMMA",
  "CRPAR", "DIV", "DO", "EQUAL", "FLOOR", "FUN", "GE", "GT", "ID", "IVAL",
  "LE", "MUL", "NOT", "OR", "READ", "RPAR", "RVAL", "REAL", "PRINT",
  "SEMICOLON", "SIZE", "SLPAR", "SRPAR", "SUB", "THEN", "VAR", "LPAR",
  "LT", "BEGINN", "$accept", "prog", "block", "declarations",
  "declaration", "var_declaration", "type", "array_dimensions",
  "fun_declaration", "fun_block", "param_list", "parameters",
  "more_parameters", "basic_declaration", "basic_array_dimensions",
  "program_body", "fun_body", "prog_stmts", "prog_stmt", "identifier",
  "expr", "bint_term", "bint_factor", "compare_op", "int_expr", "addop",
  "int_term", "mulop", "int_factor", "modifier_list", "arguments",
  "more_arguments", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
#endif

#define YYPACT_NINF (-88)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -13,   -11,     3,    35,   -88,    16,    29,   -88,   -88,    33,
      42,   -88,    10,   -88,   -13,    60,    73,    31,    77,    31,
      31,   -13,    42,    68,    31,    96,    62,    89,   -88,    61,
      69,    86,    17,    63,   -88,    64,    65,    24,   -88,    31,
     -88,    66,    57,    31,   -20,    92,   -88,    -2,     9,   -88,
      17,    -7,    25,    88,   -88,   -88,    80,   -88,    10,    31,
      72,    97,   -88,    60,   -88,   -88,   -88,   -88,    99,    31,
      31,    31,    31,   -88,   -88,   -88,    90,   -88,     2,    31,
      42,    31,   -88,   -88,   -88,   -88,   -88,   -88,   -88,    57,
      57,   -88,   -88,    57,   -88,    10,    10,   -88,   -88,    80,
      61,    17,    86,   -13,    47,    54,    59,     0,    82,    61,
     -88,    92,   -88,   -88,    -1,     9,   -88,   -88,   112,   -88,
     -88,   -88,    74,   101,   -88,   -88,   -88,    31,   -88,   -88,
      91,    10,    10,   -88,   -88,     0,   -88,   -88,   115,   -88,
      31,    45,   122,   -88
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     0,     2,     0,     0,     6,     7,     0,
      13,     1,    27,     3,     5,    18,     0,     0,     0,     0,
       0,     5,    13,     0,     0,     0,     0,     0,     4,    23,
       0,    20,     0,     0,    63,     0,     0,    13,    61,     0,
      62,     0,     0,     0,     0,    36,    38,    41,    48,    52,
       0,     0,     0,     0,    34,    30,    32,    24,    27,     0,
       0,     0,    16,     0,    17,     9,    11,    10,     0,     0,
       0,     0,    68,    66,    60,    39,     0,    64,     0,     0,
      13,     0,    49,    42,    46,    44,    45,    50,    43,     0,
       0,    54,    53,     0,     8,     0,     0,    33,    26,    31,
      23,     0,    20,     5,     0,     0,     0,    70,     0,    23,
      55,    35,    12,    37,    40,    47,    51,    29,     0,    22,
      21,    19,     0,     0,    57,    59,    58,     0,    67,    65,
       0,     0,    27,    15,    14,    70,    56,    28,     0,    69,
       0,     0,     0,    25
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -88,   -88,   105,   -12,   -88,   -88,   -44,   -18,   -88,   -88,
     -88,   -88,    26,    67,   -33,   -88,   -88,   -55,   -87,   106,
     -19,    52,   -27,   -88,    43,   -88,    44,   -88,   -35,   -88,
     -88,     1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,    68,    18,     8,   123,
      16,    30,    64,    31,    61,    13,   133,    25,    26,    27,
      44,    45,    46,    89,    47,    90,    48,    93,    49,    74,
     108,   128
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    52,    28,    98,    54,    56,    94,    77,   117,   118,
      82,    82,    75,     1,    79,    19,    95,    20,     9,    73,
     127,    65,    83,    80,    78,    84,    85,    79,    21,    86,
      66,    91,    10,     2,    79,    11,    79,    33,   110,    22,
      99,    92,    87,    87,   137,    23,    88,    34,    35,    24,
     104,   105,   106,   107,   113,    67,    36,   120,   116,    79,
      37,    38,   112,    33,    39,    12,    17,   119,    40,    14,
      96,    72,    41,    34,    35,    42,   130,   138,    43,    79,
      15,    79,    36,   124,    17,   142,    37,    38,    79,    29,
     125,   122,    32,    79,    40,   126,    50,    22,    41,    57,
      59,    42,    58,    60,    43,    62,    63,    81,   135,    97,
      69,    70,    71,    76,    79,   100,   101,   103,   129,   109,
     131,   141,   134,   132,   140,   143,    53,   136,   121,    55,
     102,   111,   114,     0,   115,     0,   139
};

static const yytype_int16 yycheck[] =
{
      19,    20,    14,    58,    22,    24,    50,    42,    95,    96,
      12,    12,    39,    26,    34,     5,    23,     7,    29,    37,
      20,     4,    24,    43,    43,    27,    28,    34,    18,    31,
      13,    22,    29,    46,    34,     0,    34,     6,    36,    29,
      59,    32,    44,    44,   131,    35,    48,    16,    17,    39,
      69,    70,    71,    72,    81,    38,    25,   101,    93,    34,
      29,    30,    80,     6,    33,    49,    42,   100,    37,    40,
      45,    47,    41,    16,    17,    44,   109,   132,    47,    34,
      47,    34,    25,    36,    42,    40,    29,    30,    34,    29,
      36,   103,    19,    34,    37,    36,    19,    29,    41,     3,
      11,    44,    40,    42,    47,    36,    20,    15,   127,    21,
      47,    47,    47,    47,    34,    43,    19,    18,    36,    29,
       8,   140,    21,    49,     9,     3,    21,    36,   102,    23,
      63,    79,    89,    -1,    90,    -1,   135
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    26,    46,    51,    52,    53,    54,    55,    58,    29,
      29,     0,    49,    65,    40,    47,    60,    42,    57,     5,
       7,    18,    29,    35,    39,    67,    68,    69,    53,    29,
      61,    63,    19,     6,    16,    17,    25,    29,    30,    33,
      37,    41,    44,    47,    70,    71,    72,    74,    76,    78,
      19,    70,    70,    52,    57,    69,    70,     3,    40,    11,
      42,    64,    36,    20,    62,     4,    13,    38,    56,    47,
      47,    47,    47,    57,    79,    72,    47,    78,    70,    34,
      43,    15,    12,    24,    27,    28,    31,    44,    48,    73,
      75,    22,    32,    77,    56,    23,    45,    21,    67,    70,
      43,    19,    63,    18,    70,    70,    70,    70,    80,    29,
      36,    71,    57,    72,    74,    76,    78,    68,    68,    64,
      56,    62,    53,    59,    36,    36,    36,    20,    81,    36,
      64,     8,    49,    66,    21,    70,    36,    68,    67,    81,
       9,    70,    40,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    53,    53,    54,    54,    55,    56,
      56,    56,    57,    57,    58,    59,    60,    61,    61,    62,
      62,    63,    64,    64,    65,    66,    67,    67,    68,    68,
      68,    68,    68,    68,    69,    70,    70,    71,    71,    72,
      72,    72,    73,    73,    73,    73,    73,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    80,    80,    81,
      81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     0,     1,     1,     5,     1,
       1,     1,     4,     0,     8,     2,     3,     2,     0,     3,
       0,     4,     3,     0,     3,     6,     3,     0,     6,     4,
       2,     3,     2,     3,     2,     3,     1,     3,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     3,     5,     4,     4,     4,
       2,     1,     1,     1,     2,     3,     1,     2,     0,     3,
       0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* prog: block  */
#line 106 "c.y"
                                                                                                                { (yyval.node) = createProgNode((yyvsp[0].node)); astRoot = (yyval.node);}
#line 1248 "c.tab.c"
    break;

  case 3: /* block: declarations program_body  */
#line 111 "c.y"
                                                                                        { (yyval.node) = createBlockNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 1254 "c.tab.c"
    break;

  case 4: /* declarations: declaration SEMICOLON declarations  */
#line 116 "c.y"
                                                                                { (yyval.node) = (yyvsp[0].node); addLinkToList((yyval.node), (yyvsp[-2].node));}
#line 1260 "c.tab.c"
    break;

  case 5: /* declarations: %empty  */
#line 117 "c.y"
                                                                                                                        { (yyval.node) = createEmptyListNode("Declarations");}
#line 1266 "c.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 122 "c.y"
                                                                                                        { (yyval.node) = createDeclarationNode((yyvsp[0].node));}
#line 1272 "c.tab.c"
    break;

  case 7: /* declaration: fun_declaration  */
#line 123 "c.y"
                                                                                                        { (yyval.node) = createDeclarationNode((yyvsp[0].node));}
#line 1278 "c.tab.c"
    break;

  case 8: /* var_declaration: VAR ID array_dimensions COLON type  */
#line 128 "c.y"
                                                                                { (yyval.node) = createVarDeclarationNode((yyvsp[-2].node), (yyvsp[0].node));}
#line 1284 "c.tab.c"
    break;

  case 9: /* type: INT  */
#line 132 "c.y"
                                                                                                                { (yyval.node) = createType("INT");}
#line 1290 "c.tab.c"
    break;

  case 10: /* type: REAL  */
#line 133 "c.y"
                                                                                                                { (yyval.node) = createType("REAL");}
#line 1296 "c.tab.c"
    break;

  case 11: /* type: BOOL  */
#line 134 "c.y"
                                                                                                                { (yyval.node) = createType("BOOL");}
#line 1302 "c.tab.c"
    break;

  case 12: /* array_dimensions: SLPAR expr SRPAR array_dimensions  */
#line 138 "c.y"
                                                                                { (yyval.node) = (yyvsp[0].node); addLinkToList((yyval.node), (yyvsp[-2].node));}
#line 1308 "c.tab.c"
    break;

  case 13: /* array_dimensions: %empty  */
#line 139 "c.y"
                                                                                                                        { (yyval.node) = createEmptyListNode("ArrayDimensions");}
#line 1314 "c.tab.c"
    break;

  case 14: /* fun_declaration: FUN ID param_list COLON type CLPAR fun_block CRPAR  */
#line 144 "c.y"
                                                                { (yyval.node) = createFunDeclarationNode((yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));}
#line 1320 "c.tab.c"
    break;

  case 15: /* fun_block: declarations fun_body  */
#line 149 "c.y"
                                                                                                { (yyval.node) = createFunBlockNode((yyvsp[-1].node), (yyvsp[0].node));}
#line 1326 "c.tab.c"
    break;

  case 16: /* param_list: LPAR parameters RPAR  */
#line 154 "c.y"
                                                                                                { (yyval.node) = createListNode("ParametersList", (yyvsp[-1].node));}
#line 1332 "c.tab.c"
    break;

  case 17: /* parameters: basic_declaration more_parameters  */
#line 159 "c.y"
                                                                                { (yyval.node) = createParametersNode((yyvsp[-1].node), (yyvsp[0].node));}
#line 1338 "c.tab.c"
    break;

  case 18: /* parameters: %empty  */
#line 160 "c.y"
                                                                                                                        { (yyval.node) = createEmptyListNode("Parameters");}
#line 1344 "c.tab.c"
    break;

  case 19: /* more_parameters: COMMA basic_declaration more_parameters  */
#line 164 "c.y"
                                                                                { (yyval.node) = (yyvsp[0].node); addLinkToList((yyval.node), (yyvsp[-1].node));}
#line 1350 "c.tab.c"
    break;

  case 20: /* more_parameters: %empty  */
#line 165 "c.y"
                                                                                                                        { (yyval.node) = createEmptyListNode("MoreParameters");}
#line 1356 "c.tab.c"
    break;

  case 21: /* basic_declaration: ID basic_array_dimensions COLON type  */
#line 169 "c.y"
                                                                                { (yyval.node) = createBasicDeclarationNode((yyvsp[-2].node), (yyvsp[0].node));}
#line 1362 "c.tab.c"
    break;

  case 22: /* basic_array_dimensions: SLPAR SRPAR basic_array_dimensions  */
#line 173 "c.y"
                                                                                { (yyval.node) = (yyvsp[0].node); addLinkToList((yyval.node), NULL);}
#line 1368 "c.tab.c"
    break;

  case 23: /* basic_array_dimensions: %empty  */
#line 174 "c.y"
                                                                                                                        { (yyval.node) = createEmptyListNode("BasicArrayDimensions");}
#line 1374 "c.tab.c"
    break;

  case 24: /* program_body: BEGINN prog_stmts END  */
#line 178 "c.y"
                                                                                                { (yyval.node) = createProgramBodyNode((yyvsp[-1].node));}
#line 1380 "c.tab.c"
    break;

  case 25: /* fun_body: BEGINN prog_stmts RETURN expr SEMICOLON END  */
#line 182 "c.y"
                                                                        { (yyval.node) = createFunBodyNode((yyvsp[-4].node),(yyvsp[-2].node));}
#line 1386 "c.tab.c"
    break;

  case 26: /* prog_stmts: prog_stmt SEMICOLON prog_stmts  */
#line 186 "c.y"
                                                                                        { (yyval.node) = (yyvsp[0].node); addLinkToList((yyval.node), (yyvsp[-2].node));}
#line 1392 "c.tab.c"
    break;

  case 27: /* prog_stmts: %empty  */
#line 187 "c.y"
                                                                                                                        { (yyval.node) = createEmptyListNode("ProgramStatement");}
#line 1398 "c.tab.c"
    break;

  case 28: /* prog_stmt: IF expr THEN prog_stmt ELSE prog_stmt  */
#line 191 "c.y"
                                                                                { (yyval.node) = createIfStatement((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));}
#line 1404 "c.tab.c"
    break;

  case 29: /* prog_stmt: WHILE expr DO prog_stmt  */
#line 192 "c.y"
                                                                                                { (yyval.node) = createWhileStatement((yyvsp[-2].node), (yyvsp[0].node));}
#line 1410 "c.tab.c"
    break;

  case 30: /* prog_stmt: READ identifier  */
#line 193 "c.y"
                                                                                                        { (yyval.node) = Prog_stms_read_identifier((yyvsp[0].node));}
#line 1416 "c.tab.c"
    break;

  case 31: /* prog_stmt: identifier ASSIGN expr  */
#line 194 "c.y"
                                                                                                { (yyval.node) = createProgStmt_assign_expr((yyvsp[-2].node),(yyvsp[0].node));}
#line 1422 "c.tab.c"
    break;

  case 32: /* prog_stmt: PRINT expr  */
#line 195 "c.y"
                                                                                                        { (yyval.node) = createProgStmt_print_expr((yyvsp[0].node));}
#line 1428 "c.tab.c"
    break;

  case 33: /* prog_stmt: CLPAR block CRPAR  */
#line 196 "c.y"
                                                                                                { (yyval.node) = createProgStmt_block((yyvsp[-1].node));}
#line 1434 "c.tab.c"
    break;

  case 34: /* identifier: ID array_dimensions  */
#line 202 "c.y"
                                                                                                { (yyval.node) = createIdentifierNode((yyvsp[0].node));}
#line 1440 "c.tab.c"
    break;

  case 35: /* expr: expr OR bint_term  */
#line 206 "c.y"
                                                                                                { (yyval.node) = (yyvsp[-2].node); addLinkToList((yyval.node), (yyvsp[0].node)); }
#line 1446 "c.tab.c"
    break;

  case 36: /* expr: bint_term  */
#line 207 "c.y"
                                                                                                        { (yyval.node) = createListNode("Bind_term_expr", (yyvsp[0].node));}
#line 1452 "c.tab.c"
    break;

  case 37: /* bint_term: bint_term AND bint_factor  */
#line 211 "c.y"
                                                                                        { (yyval.node) = (yyvsp[-2].node); addLinkToList((yyval.node), (yyvsp[0].node)); }
#line 1458 "c.tab.c"
    break;

  case 38: /* bint_term: bint_factor  */
#line 212 "c.y"
                                                                                                        { (yyval.node) = createListNode("Bind_term_factor", (yyvsp[0].node));}
#line 1464 "c.tab.c"
    break;

  case 39: /* bint_factor: NOT bint_factor  */
#line 216 "c.y"
                                                                                                        { (yyval.node) = (yyvsp[0].node); addLinkToList((yyval.node), NULL);}
#line 1470 "c.tab.c"
    break;

  case 40: /* bint_factor: int_expr compare_op int_expr  */
#line 217 "c.y"
                                                                                        { (yyval.node) = createBintFactorNode((yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1476 "c.tab.c"
    break;

  case 41: /* bint_factor: int_expr  */
#line 218 "c.y"
                                                                                                                { (yyval.node) = createListNode("Bind_factor_int_expr", (yyvsp[0].node));}
#line 1482 "c.tab.c"
    break;

  case 42: /* compare_op: EQUAL  */
#line 222 "c.y"
                                                                                                                { (yyval.node) = createEqualNode("EQUAL");}
#line 1488 "c.tab.c"
    break;

  case 43: /* compare_op: LT  */
#line 223 "c.y"
                                                                                                                { (yyval.node) = createLessThanNode("LT");}
#line 1494 "c.tab.c"
    break;

  case 44: /* compare_op: GT  */
#line 224 "c.y"
                                                                                                                { (yyval.node) = createGreaterNode("GT");}
#line 1500 "c.tab.c"
    break;

  case 45: /* compare_op: LE  */
#line 225 "c.y"
                                                                                                                { (yyval.node) = createLessOrEqualNode("LE");}
#line 1506 "c.tab.c"
    break;

  case 46: /* compare_op: GE  */
#line 226 "c.y"
                                                                                                                { (yyval.node) = createGreaterOrEqualNode("GE");}
#line 1512 "c.tab.c"
    break;

  case 47: /* int_expr: int_expr addop int_term  */
#line 230 "c.y"
                                                                                                { (yyval.node) = (yyvsp[-2].node); addLinkToList((yyval.node), (yyvsp[0].node)); }
#line 1518 "c.tab.c"
    break;

  case 48: /* int_expr: int_term  */
#line 231 "c.y"
                                                                                                                { (yyval.node) = createListNode("Int_expr_term", (yyvsp[0].node));}
#line 1524 "c.tab.c"
    break;

  case 49: /* addop: ADD  */
#line 235 "c.y"
                                                                                                                { (yyval.node) = createAdditionNode("ADD");}
#line 1530 "c.tab.c"
    break;

  case 50: /* addop: SUB  */
#line 236 "c.y"
                                                                                                                { (yyval.node) = createSubtractionNode("SUB");}
#line 1536 "c.tab.c"
    break;

  case 51: /* int_term: int_term mulop int_factor  */
#line 240 "c.y"
                                                                                        { (yyval.node) = (yyvsp[-2].node); addLinkToList((yyval.node), (yyvsp[0].node)); }
#line 1542 "c.tab.c"
    break;

  case 52: /* int_term: int_factor  */
#line 241 "c.y"
                                                                                                        { (yyval.node) = createListNode("Int_term_factor", (yyvsp[0].node));}
#line 1548 "c.tab.c"
    break;

  case 53: /* mulop: MUL  */
#line 245 "c.y"
                                                                                                                { (yyval.node) = createMultiplyNode("MUL");}
#line 1554 "c.tab.c"
    break;

  case 54: /* mulop: DIV  */
#line 246 "c.y"
                                                                                                                { (yyval.node) = createDivideNode("DIV");}
#line 1560 "c.tab.c"
    break;

  case 55: /* int_factor: LPAR expr RPAR  */
#line 250 "c.y"
                                                                                                        { (yyval.node) = createIntFactorExprNode((yyvsp[-1].node));}
#line 1566 "c.tab.c"
    break;

  case 56: /* int_factor: SIZE LPAR ID basic_array_dimensions RPAR  */
#line 251 "c.y"
                                                                                { (yyval.node) = createIntFactorArrayDimNode((yyvsp[-1].node));}
#line 1572 "c.tab.c"
    break;

  case 57: /* int_factor: FLOAT LPAR expr RPAR  */
#line 252 "c.y"
                                                                                                { (yyval.node) = createIntFactorFloatExprNode((yyvsp[-1].node));}
#line 1578 "c.tab.c"
    break;

  case 58: /* int_factor: FLOOR LPAR expr RPAR  */
#line 253 "c.y"
                                                                                                { (yyval.node) = createIntFactorFloorExprNode((yyvsp[-1].node));}
#line 1584 "c.tab.c"
    break;

  case 59: /* int_factor: CEIL LPAR expr RPAR  */
#line 254 "c.y"
                                                                                                { (yyval.node) = createIntFactorCeilExprNode((yyvsp[-1].node));}
#line 1590 "c.tab.c"
    break;

  case 60: /* int_factor: ID modifier_list  */
#line 255 "c.y"
                                                                                                        { (yyval.node) = createIntFactorModifierListNode((yyvsp[0].node));}
#line 1596 "c.tab.c"
    break;

  case 61: /* int_factor: IVAL  */
#line 256 "c.y"
                                                                                                                { (yyval.node) = createIntFactorIvalNode("IVAL");}
#line 1602 "c.tab.c"
    break;

  case 62: /* int_factor: RVAL  */
#line 257 "c.y"
                                                                                                                { (yyval.node) = createIntFactorRvalNode("RVAL");}
#line 1608 "c.tab.c"
    break;

  case 63: /* int_factor: BVAL  */
#line 258 "c.y"
                                                                                                                { (yyval.node) = createIntFactorBvalNode("BVAL");}
#line 1614 "c.tab.c"
    break;

  case 64: /* int_factor: SUB int_factor  */
#line 259 "c.y"
                                                                                                        { (yyval.node) = (yyvsp[0].node); addLinkToList((yyval.node), NULL); }
#line 1620 "c.tab.c"
    break;

  case 65: /* modifier_list: LPAR arguments RPAR  */
#line 263 "c.y"
                                                                                                { (yyval.node) = createModifierListArgumentsNode((yyvsp[-1].node));}
#line 1626 "c.tab.c"
    break;

  case 66: /* modifier_list: array_dimensions  */
#line 264 "c.y"
                                                                                                        { (yyval.node) = createModifierListArrayDimNode((yyvsp[0].node));}
#line 1632 "c.tab.c"
    break;

  case 67: /* arguments: expr more_arguments  */
#line 268 "c.y"
                                                                                                { (yyval.node) = createArgumentsNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 1638 "c.tab.c"
    break;

  case 68: /* arguments: %empty  */
#line 269 "c.y"
                                                                                                                        { (yyval.node) = createEmptyListNode("Arguments");}
#line 1644 "c.tab.c"
    break;

  case 69: /* more_arguments: COMMA expr more_arguments  */
#line 273 "c.y"
                                                                                        { (yyval.node) = (yyvsp[0].node); addLinkToList((yyval.node), (yyvsp[-1].node));}
#line 1650 "c.tab.c"
    break;

  case 70: /* more_arguments: %empty  */
#line 274 "c.y"
                                                                                                                        { (yyval.node) = createEmptyListNode("MoreArguments");}
#line 1656 "c.tab.c"
    break;


#line 1660 "c.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 277 "c.y"


int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  
