/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         scdocparse
#define yylex           scdoclex
#define yyerror         scdocerror
#define yydebug         scdocdebug
#define yynerrs         scdocnerrs
#define yylval          scdoclval
#define yychar          scdocchar
#define yylloc          scdoclloc

/* First part of user prologue.  */
#line 1 "SCDoc.y"

/************************************************************************
*
* Copyright 2012 Jonatan Liljedahl <lijon@kymatica.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "SCDoc.h"

//#define YYLEX_PARAM &yylval, &yylloc

int scdocparse();

extern int scdoclineno;
extern char *scdoctext;
extern int scdoc_start_token;
extern FILE *scdocin;
//extern struct YYLTYPE scdoclloc;

//int scdoc_metadata_mode;

static const char * method_type = NULL;

static DocNode * topnode;

void scdocerror(const char *str);

extern void error(const char *fmt, ...);
extern void post(const char *fmt, ...);

static inline bool stringEqual(const char * a, const char * b)
{
    return strcmp(a, b) == 0;
}


#line 132 "SCDoc.tab.cpp"

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

#include "SCDoc.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CLASS = 3,                      /* CLASS  */
  YYSYMBOL_TITLE = 4,                      /* TITLE  */
  YYSYMBOL_SUMMARY = 5,                    /* SUMMARY  */
  YYSYMBOL_RELATED = 6,                    /* RELATED  */
  YYSYMBOL_CATEGORIES = 7,                 /* CATEGORIES  */
  YYSYMBOL_REDIRECT = 8,                   /* REDIRECT  */
  YYSYMBOL_CLASSTREE = 9,                  /* CLASSTREE  */
  YYSYMBOL_COPYMETHOD = 10,                /* COPYMETHOD  */
  YYSYMBOL_KEYWORD = 11,                   /* KEYWORD  */
  YYSYMBOL_PRIVATE = 12,                   /* PRIVATE  */
  YYSYMBOL_SECTION = 13,                   /* SECTION  */
  YYSYMBOL_SUBSECTION = 14,                /* SUBSECTION  */
  YYSYMBOL_METHOD = 15,                    /* METHOD  */
  YYSYMBOL_ARGUMENT = 16,                  /* ARGUMENT  */
  YYSYMBOL_DESCRIPTION = 17,               /* DESCRIPTION  */
  YYSYMBOL_CLASSMETHODS = 18,              /* CLASSMETHODS  */
  YYSYMBOL_INSTANCEMETHODS = 19,           /* INSTANCEMETHODS  */
  YYSYMBOL_EXAMPLES = 20,                  /* EXAMPLES  */
  YYSYMBOL_RETURNS = 21,                   /* RETURNS  */
  YYSYMBOL_DISCUSSION = 22,                /* DISCUSSION  */
  YYSYMBOL_LIST = 23,                      /* LIST  */
  YYSYMBOL_TREE = 24,                      /* TREE  */
  YYSYMBOL_NUMBEREDLIST = 25,              /* NUMBEREDLIST  */
  YYSYMBOL_DEFINITIONLIST = 26,            /* DEFINITIONLIST  */
  YYSYMBOL_TABLE = 27,                     /* TABLE  */
  YYSYMBOL_FOOTNOTE = 28,                  /* FOOTNOTE  */
  YYSYMBOL_NOTE = 29,                      /* NOTE  */
  YYSYMBOL_WARNING = 30,                   /* WARNING  */
  YYSYMBOL_CODE = 31,                      /* CODE  */
  YYSYMBOL_LINK = 32,                      /* LINK  */
  YYSYMBOL_ANCHOR = 33,                    /* ANCHOR  */
  YYSYMBOL_SOFT = 34,                      /* SOFT  */
  YYSYMBOL_IMAGE = 35,                     /* IMAGE  */
  YYSYMBOL_TELETYPE = 36,                  /* TELETYPE  */
  YYSYMBOL_MATH = 37,                      /* MATH  */
  YYSYMBOL_STRONG = 38,                    /* STRONG  */
  YYSYMBOL_EMPHASIS = 39,                  /* EMPHASIS  */
  YYSYMBOL_CODEBLOCK = 40,                 /* "CODE block"  */
  YYSYMBOL_TELETYPEBLOCK = 41,             /* "TELETYPE block"  */
  YYSYMBOL_MATHBLOCK = 42,                 /* "MATH block"  */
  YYSYMBOL_TAGSYM = 43,                    /* "::"  */
  YYSYMBOL_BARS = 44,                      /* "||"  */
  YYSYMBOL_HASHES = 45,                    /* "##"  */
  YYSYMBOL_TEXT = 46,                      /* "text"  */
  YYSYMBOL_URL = 47,                       /* URL  */
  YYSYMBOL_COMMA = 48,                     /* COMMA  */
  YYSYMBOL_METHODNAME = 49,                /* "method name"  */
  YYSYMBOL_METHODARGS = 50,                /* "arguments string"  */
  YYSYMBOL_NEWLINE = 51,                   /* "newline"  */
  YYSYMBOL_EMPTYLINES = 52,                /* "empty lines"  */
  YYSYMBOL_BAD_METHODNAME = 53,            /* "bad method name"  */
  YYSYMBOL_START_FULL = 54,                /* START_FULL  */
  YYSYMBOL_START_PARTIAL = 55,             /* START_PARTIAL  */
  YYSYMBOL_START_METADATA = 56,            /* START_METADATA  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_start = 58,                     /* start  */
  YYSYMBOL_document = 59,                  /* document  */
  YYSYMBOL_eateol = 60,                    /* eateol  */
  YYSYMBOL_dochead = 61,                   /* dochead  */
  YYSYMBOL_headline = 62,                  /* headline  */
  YYSYMBOL_headtag = 63,                   /* headtag  */
  YYSYMBOL_sectiontag = 64,                /* sectiontag  */
  YYSYMBOL_optsections = 65,               /* optsections  */
  YYSYMBOL_sections = 66,                  /* sections  */
  YYSYMBOL_section = 67,                   /* section  */
  YYSYMBOL_68_1 = 68,                      /* $@1  */
  YYSYMBOL_optsubsections = 69,            /* optsubsections  */
  YYSYMBOL_subsections = 70,               /* subsections  */
  YYSYMBOL_subsection = 71,                /* subsection  */
  YYSYMBOL_optsubsubsections = 72,         /* optsubsubsections  */
  YYSYMBOL_subsubsections = 73,            /* subsubsections  */
  YYSYMBOL_subsubsection = 74,             /* subsubsection  */
  YYSYMBOL_optMETHODARGS = 75,             /* optMETHODARGS  */
  YYSYMBOL_methodname = 76,                /* methodname  */
  YYSYMBOL_methnames = 77,                 /* methnames  */
  YYSYMBOL_methodbody = 78,                /* methodbody  */
  YYSYMBOL_optbody = 79,                   /* optbody  */
  YYSYMBOL_optargs = 80,                   /* optargs  */
  YYSYMBOL_args = 81,                      /* args  */
  YYSYMBOL_arg = 82,                       /* arg  */
  YYSYMBOL_optreturns = 83,                /* optreturns  */
  YYSYMBOL_optdiscussion = 84,             /* optdiscussion  */
  YYSYMBOL_body = 85,                      /* body  */
  YYSYMBOL_blockA = 86,                    /* blockA  */
  YYSYMBOL_blockB = 87,                    /* blockB  */
  YYSYMBOL_bodyelem = 88,                  /* bodyelem  */
  YYSYMBOL_prose = 89,                     /* prose  */
  YYSYMBOL_proseelem = 90,                 /* proseelem  */
  YYSYMBOL_inlinetag = 91,                 /* inlinetag  */
  YYSYMBOL_blocktag = 92,                  /* blocktag  */
  YYSYMBOL_listtag = 93,                   /* listtag  */
  YYSYMBOL_rangetag = 94,                  /* rangetag  */
  YYSYMBOL_listbody = 95,                  /* listbody  */
  YYSYMBOL_tablerow = 96,                  /* tablerow  */
  YYSYMBOL_tablebody = 97,                 /* tablebody  */
  YYSYMBOL_tablecells = 98,                /* tablecells  */
  YYSYMBOL_defterms = 99,                  /* defterms  */
  YYSYMBOL_deflistrow = 100,               /* deflistrow  */
  YYSYMBOL_deflistbody = 101,              /* deflistbody  */
  YYSYMBOL_anywordurl = 102,               /* anywordurl  */
  YYSYMBOL_anyword = 103,                  /* anyword  */
  YYSYMBOL_words = 104,                    /* words  */
  YYSYMBOL_words2 = 105,                   /* words2  */
  YYSYMBOL_eol = 106,                      /* eol  */
  YYSYMBOL_eoleof = 107,                   /* eoleof  */
  YYSYMBOL_anywordnl = 108,                /* anywordnl  */
  YYSYMBOL_wordsnl = 109,                  /* wordsnl  */
  YYSYMBOL_nocommawords = 110,             /* nocommawords  */
  YYSYMBOL_commalist = 111                 /* commalist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 100 "SCDoc.y"

//int scdoclex (YYSTYPE * yylval_param, struct YYLTYPE * yylloc_param );
int scdoclex (void);

#line 282 "SCDoc.tab.cpp"


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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   434

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   107,   107,   108,   111,   117,   121,   129,   130,   133,
     134,   137,   138,   139,   142,   143,   144,   145,   148,   149,
     150,   151,   154,   155,   158,   159,   160,   163,   163,   164,
     167,   168,   171,   172,   173,   176,   179,   180,   183,   184,
     185,   188,   195,   207,   212,   213,   224,   235,   236,   239,
     248,   249,   252,   253,   256,   257,   260,   261,   264,   265,
     268,   269,   277,   278,   281,   282,   283,   286,   287,   290,
     291,   292,   293,   294,   295,   296,   299,   300,   303,   304,
     307,   308,   309,   310,   311,   314,   315,   316,   317,   318,
     319,   320,   321,   324,   325,   326,   329,   330,   331,   334,
     335,   338,   339,   342,   345,   346,   349,   350,   353,   354,
     357,   364,   365,   368,   369,   372,   373,   376,   377,   380,
     381,   384,   385,   388,   389,   392,   393,   396,   397,   400,
     401,   402,   403,   406,   407
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CLASS", "TITLE",
  "SUMMARY", "RELATED", "CATEGORIES", "REDIRECT", "CLASSTREE",
  "COPYMETHOD", "KEYWORD", "PRIVATE", "SECTION", "SUBSECTION", "METHOD",
  "ARGUMENT", "DESCRIPTION", "CLASSMETHODS", "INSTANCEMETHODS", "EXAMPLES",
  "RETURNS", "DISCUSSION", "LIST", "TREE", "NUMBEREDLIST",
  "DEFINITIONLIST", "TABLE", "FOOTNOTE", "NOTE", "WARNING", "CODE", "LINK",
  "ANCHOR", "SOFT", "IMAGE", "TELETYPE", "MATH", "STRONG", "EMPHASIS",
  "\"CODE block\"", "\"TELETYPE block\"", "\"MATH block\"", "\"::\"",
  "\"||\"", "\"##\"", "\"text\"", "URL", "COMMA", "\"method name\"",
  "\"arguments string\"", "\"newline\"", "\"empty lines\"",
  "\"bad method name\"", "START_FULL", "START_PARTIAL", "START_METADATA",
  "$accept", "start", "document", "eateol", "dochead", "headline",
  "headtag", "sectiontag", "optsections", "sections", "section", "$@1",
  "optsubsections", "subsections", "subsection", "optsubsubsections",
  "subsubsections", "subsubsection", "optMETHODARGS", "methodname",
  "methnames", "methodbody", "optbody", "optargs", "args", "arg",
  "optreturns", "optdiscussion", "body", "blockA", "blockB", "bodyelem",
  "prose", "proseelem", "inlinetag", "blocktag", "listtag", "rangetag",
  "listbody", "tablerow", "tablebody", "tablecells", "defterms",
  "deflistrow", "deflistbody", "anywordurl", "anyword", "words", "words2",
  "eol", "eoleof", "anywordnl", "wordsnl", "nocommawords", "commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-125)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,    78,   226,   150,    19,   139,  -125,  -125,   150,  -125,
     -35,   -35,   100,   100,  -125,   -21,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,   -10,    -6,   348,  -125,  -125,  -125,  -125,
    -125,  -125,    54,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,   270,   125,  -125,    30,  -125,
    -125,   348,   382,  -125,    58,  -125,   -35,    25,    -2,   348,
    -125,  -125,  -125,  -125,   100,   100,  -125,   182,  -125,    54,
    -125,  -125,   182,  -125,     7,    25,  -125,  -125,   104,    16,
      16,    54,  -125,  -125,   -23,   348,   117,  -125,    74,   348,
    -125,    80,    32,  -125,  -125,  -125,    35,    54,  -125,    71,
    -125,    30,  -125,  -125,  -125,    58,  -125,  -125,   -31,  -125,
    -125,  -125,   -22,   348,    83,    64,    62,    62,  -125,  -125,
     125,   -15,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
     100,  -125,  -125,   -15,   -21,  -125,    78,  -125,   348,   348,
    -125,  -125,  -125,  -125,    93,  -125,  -125,  -125,  -125,  -125,
     -15,  -125,  -125,  -125,  -125,  -125,  -125,   348,  -125,  -125,
    -125,  -125,   104,   270,  -125,   348,  -125,  -125,   348,   314,
    -125,  -125,  -125,   102,  -125,  -125,    30,    25,   101,   102,
    -125,    25,   348,   348,   109,  -125,   348,  -125,  -125,   348,
    -125,  -125,  -125
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,     0,     0,     0,     0,   121,   122,     0,     7,
       0,     0,     0,     0,    27,     0,    20,    18,    19,    21,
      96,    97,    98,     0,     0,     0,   100,    99,    89,    85,
      92,    87,     0,    90,    91,    86,    88,    93,    95,    94,
     115,    81,   116,    84,    76,    31,     5,    25,    26,    39,
      40,    62,    63,    66,    68,    79,     0,     0,     0,     0,
      80,    14,    15,    16,     0,     0,    17,    23,    10,     0,
       1,     3,    23,   118,     0,     0,   131,   132,   134,     0,
       0,     0,    46,    48,    44,     0,     0,   112,     0,    51,
     105,     0,     0,   114,   120,   113,     0,     0,    29,    30,
      33,    34,    24,    38,    65,    67,    64,    78,     0,   125,
     126,   128,     0,     0,     0,     0,     0,     0,     9,     6,
      22,     0,     4,   124,   117,   123,    74,    42,   129,   130,
       0,    75,    43,     0,     0,    45,     0,   109,    51,     0,
      72,   111,   107,    50,   103,    71,   104,    83,    77,   119,
       0,    32,    82,    73,   127,   102,    70,     0,    69,    13,
      12,    11,   133,    31,    47,    51,   110,   108,    51,    37,
     101,    28,    41,    53,   106,    35,    36,     0,    59,    52,
      55,     0,     0,     0,    61,    54,    51,    57,    58,     0,
      49,    56,    60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,  -125,   140,    26,  -125,  -125,    97,   157,
     -41,  -125,     8,  -125,    75,  -125,   -42,   -40,  -125,    39,
    -125,  -125,  -124,  -125,  -125,     0,  -125,  -125,    -5,  -125,
    -125,   113,   124,   -48,  -125,  -125,  -125,  -125,  -125,    91,
    -125,  -125,  -125,    95,  -125,   -87,    -9,    -7,   -59,    -1,
      87,    84,  -125,    68,     5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     8,    67,    68,    69,    45,   119,   120,
      47,    81,    98,    99,   100,   175,    48,    49,   136,    83,
      84,   172,   142,   178,   179,   180,   184,   190,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,   114,    90,
      91,   144,    86,    87,    88,    94,    60,    74,    96,   125,
     126,   111,   112,    78,    79
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    73,    73,   101,    75,   102,   107,   123,   103,   149,
     121,    40,   152,    42,   166,    40,   123,    42,    80,    70,
      92,   153,   133,    95,    40,   134,    42,   135,    82,     6,
       7,    40,    93,    42,   149,    85,     6,     7,   150,    89,
      11,   173,    13,   113,   174,    15,   149,    73,   109,   108,
       1,     2,     3,    40,   115,    42,   110,   107,     6,     7,
      95,   103,   191,   149,   130,   124,   124,     6,     7,   116,
     117,    40,    95,    42,   127,   147,     6,     7,   148,   102,
     137,    40,    93,    42,   143,    97,    25,    95,    95,    28,
      29,    30,    31,   118,    33,    34,    35,    36,   118,   124,
      40,    93,    42,   109,    40,    41,    42,   158,   155,    43,
     130,   110,    95,     6,     7,   159,   160,   140,   177,    85,
     161,   101,   183,   145,    95,    89,   156,   176,   157,     6,
       7,   189,   163,   143,   167,   165,   103,   168,    14,    -2,
      71,    95,    16,    17,    18,    19,    76,    77,    72,   169,
     128,   129,   170,    61,    62,    63,    64,    65,    66,    46,
     143,   138,   139,   143,   104,   106,   131,   132,    73,   122,
     181,   171,   124,   164,   151,   105,   182,   187,   188,   185,
     186,   143,   146,   141,   192,    61,    62,    63,    64,    65,
      66,    10,    11,    12,    13,    14,   154,    15,   162,    16,
      17,    18,    19,     0,     0,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     0,     0,     0,    40,    41,
      42,     0,     0,    43,    44,    10,    11,    12,    13,    14,
       0,    15,     0,    16,    17,    18,    19,     0,     0,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,     0,
       0,     0,    40,    41,    42,     0,     0,    43,    44,    10,
      11,    12,    13,     0,    97,    15,     0,     0,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,     0,     0,     0,    40,    41,    42,     0,
       0,    43,    44,    10,    11,    12,    13,     0,     0,    15,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    10,     0,    12,
      40,    41,    42,     0,     0,    43,    44,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    10,     0,    12,    40,    41,    42,     0,     0,    43,
      44,     0,     0,     0,     0,    20,    21,    22,    23,    24,
       0,    26,    27,     0,     0,     0,     0,    32,     0,     0,
       0,     0,    37,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44
};

static const yytype_int16 yycheck[] =
{
       1,    10,    11,    45,    11,    46,    54,     0,    48,    96,
      69,    46,    43,    48,   138,    46,     0,    48,    13,     0,
      25,    43,    81,    32,    46,    48,    48,    50,    49,    51,
      52,    46,    47,    48,   121,    45,    51,    52,    97,    45,
      10,   165,    12,    45,   168,    15,   133,    56,    57,    56,
      54,    55,    56,    46,    59,    48,    57,   105,    51,    52,
      69,   101,   186,   150,    48,    74,    75,    51,    52,    64,
      65,    46,    81,    48,    75,    43,    51,    52,    43,   120,
      85,    46,    47,    48,    89,    14,    28,    96,    97,    31,
      32,    33,    34,    67,    36,    37,    38,    39,    72,   108,
      46,    47,    48,   112,    46,    47,    48,    43,   113,    51,
      48,   112,   121,    51,    52,   116,   117,    43,    16,    45,
     121,   163,    21,    43,   133,    45,    43,   169,    45,    51,
      52,    22,   133,   138,   139,   136,   176,    44,    13,     0,
       1,   150,    17,    18,    19,    20,    46,    47,     8,   150,
      46,    47,   157,     3,     4,     5,     6,     7,     8,     2,
     165,    44,    45,   168,    51,    52,    79,    80,   177,    72,
     177,   163,   181,   134,    99,    51,   177,   182,   183,   179,
     181,   186,    91,    88,   189,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   112,    15,   130,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    46,    47,
      48,    -1,    -1,    51,    52,     9,    10,    11,    12,    13,
      -1,    15,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    46,    47,    48,    -1,    -1,    51,    52,     9,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    46,    47,    48,    -1,
      -1,    51,    52,     9,    10,    11,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     9,    -1,    11,
      46,    47,    48,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     9,    -1,    11,    46,    47,    48,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      -1,    29,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    54,    55,    56,    58,    59,    51,    52,    60,   106,
       9,    10,    11,    12,    13,    15,    17,    18,    19,    20,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      46,    47,    48,    51,    52,    64,    66,    67,    73,    74,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
     103,     3,     4,     5,     6,     7,     8,    61,    62,    63,
       0,     1,    61,   103,   104,   104,    46,    47,   110,   111,
     111,    68,    49,    76,    77,    45,    99,   100,   101,    45,
      96,    97,    85,    47,   102,   103,   105,    14,    69,    70,
      71,    73,    67,    74,    88,    89,    88,    90,   104,   103,
     106,   108,   109,    45,    95,    85,   111,   111,    62,    65,
      66,   105,    65,     0,   103,   106,   107,   106,    46,    47,
      48,   107,   107,   105,    48,    50,    75,    85,    44,    45,
      43,   100,    79,    85,    98,    43,    96,    43,    43,   102,
     105,    71,    43,    43,   108,    85,    43,    45,    43,   106,
     106,   106,   110,   106,    76,   106,    79,    85,    44,   106,
      85,    69,    78,    79,    79,    72,    73,    16,    80,    81,
      82,   104,   106,    21,    83,    82,   106,    85,    85,    22,
      84,    79,    85
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    59,    60,    60,    61,
      61,    62,    62,    62,    63,    63,    63,    63,    64,    64,
      64,    64,    65,    65,    66,    66,    66,    68,    67,    67,
      69,    69,    70,    70,    70,    71,    72,    72,    73,    73,
      73,    74,    74,    74,    75,    75,    76,    77,    77,    78,
      79,    79,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    86,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    89,    89,
      90,    90,    90,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    93,    93,    93,    94,
      94,    95,    95,    96,    97,    97,    98,    98,    99,    99,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   110,   110,   111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     4,     2,     3,     1,     0,     2,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     0,     5,     2,
       1,     0,     2,     1,     1,     4,     1,     0,     2,     1,
       1,     5,     3,     3,     0,     1,     1,     3,     1,     4,
       1,     0,     1,     0,     2,     1,     4,     3,     2,     0,
       2,     0,     1,     1,     2,     2,     1,     2,     1,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     2,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     2,     1,     3,     1,     3,     2,
       3,     2,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       2,     1,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_TEXT: /* "text"  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1539 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_URL: /* URL  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1545 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_COMMA: /* COMMA  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1551 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_METHODNAME: /* "method name"  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1557 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_METHODARGS: /* "arguments string"  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1563 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_document: /* document  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1569 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_dochead: /* dochead  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1575 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_headline: /* headline  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1581 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_optsections: /* optsections  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1587 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_sections: /* sections  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1593 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_section: /* section  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1599 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_optsubsections: /* optsubsections  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1605 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_subsections: /* subsections  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1611 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_subsection: /* subsection  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1617 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_optsubsubsections: /* optsubsubsections  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1623 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_subsubsections: /* subsubsections  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1629 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_subsubsection: /* subsubsection  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1635 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_optMETHODARGS: /* optMETHODARGS  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1641 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_methodname: /* methodname  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1647 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_methnames: /* methnames  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1653 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_methodbody: /* methodbody  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1659 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_optbody: /* optbody  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1665 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_optargs: /* optargs  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1671 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_args: /* args  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1677 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_arg: /* arg  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1683 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_optreturns: /* optreturns  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1689 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_optdiscussion: /* optdiscussion  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1695 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_body: /* body  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1701 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_blockA: /* blockA  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1707 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_blockB: /* blockB  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1713 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_bodyelem: /* bodyelem  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1719 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_prose: /* prose  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1725 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_proseelem: /* proseelem  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1731 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_listbody: /* listbody  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1737 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_tablerow: /* tablerow  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1743 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_tablebody: /* tablebody  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1749 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_tablecells: /* tablecells  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1755 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_defterms: /* defterms  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1761 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_deflistrow: /* deflistrow  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1767 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_deflistbody: /* deflistbody  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1773 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_anywordurl: /* anywordurl  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1779 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_anyword: /* anyword  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1785 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_words: /* words  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1791 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_words2: /* words2  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1797 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_anywordnl: /* anywordnl  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1803 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_wordsnl: /* wordsnl  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1809 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_nocommawords: /* nocommawords  */
#line 98 "SCDoc.y"
            { free(((*yyvaluep).str)); }
#line 1815 "SCDoc.tab.cpp"
        break;

    case YYSYMBOL_commalist: /* commalist  */
#line 97 "SCDoc.y"
            { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1821 "SCDoc.tab.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
    YYNOMEM;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  if (yychar <= END)
    {
      yychar = END;
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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: document  */
#line 107 "SCDoc.y"
                { topnode = (yyvsp[0].doc_node); }
#line 2119 "SCDoc.tab.cpp"
    break;

  case 3: /* start: document error  */
#line 108 "SCDoc.y"
                      { topnode = NULL; doc_node_free_tree((yyvsp[-1].doc_node)); }
#line 2125 "SCDoc.tab.cpp"
    break;

  case 4: /* document: START_FULL eateol dochead optsections  */
#line 112 "SCDoc.y"
    {
        (yyval.doc_node) = doc_node_create("DOCUMENT");
        doc_node_add_child((yyval.doc_node), (yyvsp[-1].doc_node));
        doc_node_add_child((yyval.doc_node), (yyvsp[0].doc_node));
    }
#line 2135 "SCDoc.tab.cpp"
    break;

  case 5: /* document: START_PARTIAL sections  */
#line 118 "SCDoc.y"
    {
        (yyval.doc_node) = doc_node_make_take_children("BODY",NULL,(yyvsp[0].doc_node));
    }
#line 2143 "SCDoc.tab.cpp"
    break;

  case 6: /* document: START_METADATA dochead optsections  */
#line 122 "SCDoc.y"
    {
        (yyval.doc_node) = doc_node_create("DOCUMENT");
        doc_node_add_child((yyval.doc_node), (yyvsp[-1].doc_node));
        doc_node_add_child((yyval.doc_node), (yyvsp[0].doc_node));
    }
#line 2153 "SCDoc.tab.cpp"
    break;

  case 9: /* dochead: dochead headline  */
#line 133 "SCDoc.y"
                          { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2159 "SCDoc.tab.cpp"
    break;

  case 10: /* dochead: headline  */
#line 134 "SCDoc.y"
                  { (yyval.doc_node) = doc_node_make("HEADER",NULL,(yyvsp[0].doc_node)); }
#line 2165 "SCDoc.tab.cpp"
    break;

  case 11: /* headline: headtag words2 eol  */
#line 137 "SCDoc.y"
                             { (yyval.doc_node) = doc_node_make((yyvsp[-2].id),(yyvsp[-1].str),NULL); }
#line 2171 "SCDoc.tab.cpp"
    break;

  case 12: /* headline: CATEGORIES commalist eol  */
#line 138 "SCDoc.y"
                                   { (yyval.doc_node) = doc_node_make_take_children("CATEGORIES",NULL,(yyvsp[-1].doc_node)); }
#line 2177 "SCDoc.tab.cpp"
    break;

  case 13: /* headline: RELATED commalist eol  */
#line 139 "SCDoc.y"
                                { (yyval.doc_node) = doc_node_make_take_children("RELATED",NULL,(yyvsp[-1].doc_node)); }
#line 2183 "SCDoc.tab.cpp"
    break;

  case 14: /* headtag: CLASS  */
#line 142 "SCDoc.y"
               { (yyval.id) = "TITLE"; }
#line 2189 "SCDoc.tab.cpp"
    break;

  case 15: /* headtag: TITLE  */
#line 143 "SCDoc.y"
               { (yyval.id) = "TITLE"; }
#line 2195 "SCDoc.tab.cpp"
    break;

  case 16: /* headtag: SUMMARY  */
#line 144 "SCDoc.y"
                 { (yyval.id) = "SUMMARY"; }
#line 2201 "SCDoc.tab.cpp"
    break;

  case 17: /* headtag: REDIRECT  */
#line 145 "SCDoc.y"
                  { (yyval.id) = "REDIRECT"; }
#line 2207 "SCDoc.tab.cpp"
    break;

  case 18: /* sectiontag: CLASSMETHODS  */
#line 148 "SCDoc.y"
                         { (yyval.id) = "CLASSMETHODS"; method_type = "CMETHOD"; }
#line 2213 "SCDoc.tab.cpp"
    break;

  case 19: /* sectiontag: INSTANCEMETHODS  */
#line 149 "SCDoc.y"
                            { (yyval.id) = "INSTANCEMETHODS"; method_type = "IMETHOD"; }
#line 2219 "SCDoc.tab.cpp"
    break;

  case 20: /* sectiontag: DESCRIPTION  */
#line 150 "SCDoc.y"
                        { (yyval.id) = "DESCRIPTION"; method_type = "METHOD"; }
#line 2225 "SCDoc.tab.cpp"
    break;

  case 21: /* sectiontag: EXAMPLES  */
#line 151 "SCDoc.y"
                     { (yyval.id) = "EXAMPLES"; method_type = "METHOD"; }
#line 2231 "SCDoc.tab.cpp"
    break;

  case 23: /* optsections: %empty  */
#line 155 "SCDoc.y"
             { (yyval.doc_node) = doc_node_make("BODY",NULL,NULL); }
#line 2237 "SCDoc.tab.cpp"
    break;

  case 24: /* sections: sections section  */
#line 158 "SCDoc.y"
                           { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2243 "SCDoc.tab.cpp"
    break;

  case 25: /* sections: section  */
#line 159 "SCDoc.y"
                  { (yyval.doc_node) = doc_node_make("BODY",NULL,(yyvsp[0].doc_node)); }
#line 2249 "SCDoc.tab.cpp"
    break;

  case 26: /* sections: subsubsections  */
#line 160 "SCDoc.y"
                         { (yyval.doc_node) = doc_node_make_take_children("BODY",NULL,(yyvsp[0].doc_node)); }
#line 2255 "SCDoc.tab.cpp"
    break;

  case 27: /* $@1: %empty  */
#line 163 "SCDoc.y"
                 { method_type = "METHOD"; }
#line 2261 "SCDoc.tab.cpp"
    break;

  case 28: /* section: SECTION $@1 words2 eol optsubsections  */
#line 163 "SCDoc.y"
                                                                       { (yyval.doc_node) = doc_node_make_take_children("SECTION",(yyvsp[-2].str),(yyvsp[0].doc_node)); }
#line 2267 "SCDoc.tab.cpp"
    break;

  case 29: /* section: sectiontag optsubsections  */
#line 164 "SCDoc.y"
                                   { (yyval.doc_node) = doc_node_make_take_children((yyvsp[-1].id), NULL,(yyvsp[0].doc_node)); }
#line 2273 "SCDoc.tab.cpp"
    break;

  case 31: /* optsubsections: %empty  */
#line 168 "SCDoc.y"
                { (yyval.doc_node) = NULL; }
#line 2279 "SCDoc.tab.cpp"
    break;

  case 32: /* subsections: subsections subsection  */
#line 171 "SCDoc.y"
                                    { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2285 "SCDoc.tab.cpp"
    break;

  case 33: /* subsections: subsection  */
#line 172 "SCDoc.y"
                        { (yyval.doc_node) = doc_node_make("(SUBSECTIONS)",NULL,(yyvsp[0].doc_node)); }
#line 2291 "SCDoc.tab.cpp"
    break;

  case 35: /* subsection: SUBSECTION words2 eol optsubsubsections  */
#line 176 "SCDoc.y"
                                                    { (yyval.doc_node) = doc_node_make_take_children("SUBSECTION", (yyvsp[-2].str), (yyvsp[0].doc_node)); }
#line 2297 "SCDoc.tab.cpp"
    break;

  case 37: /* optsubsubsections: %empty  */
#line 180 "SCDoc.y"
                   { (yyval.doc_node) = NULL; }
#line 2303 "SCDoc.tab.cpp"
    break;

  case 38: /* subsubsections: subsubsections subsubsection  */
#line 183 "SCDoc.y"
                                             { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2309 "SCDoc.tab.cpp"
    break;

  case 39: /* subsubsections: subsubsection  */
#line 184 "SCDoc.y"
                              { (yyval.doc_node) = doc_node_make("(SUBSUBSECTIONS)",NULL,(yyvsp[0].doc_node)); }
#line 2315 "SCDoc.tab.cpp"
    break;

  case 40: /* subsubsections: body  */
#line 185 "SCDoc.y"
                     { (yyval.doc_node) = doc_node_make_take_children("(SUBSUBSECTIONS)",NULL,(yyvsp[0].doc_node)); }
#line 2321 "SCDoc.tab.cpp"
    break;

  case 41: /* subsubsection: METHOD methnames optMETHODARGS eol methodbody  */
#line 189 "SCDoc.y"
    {
        (yyvsp[-3].doc_node)->id = "METHODNAMES";
        (yyval.doc_node) = doc_node_make(method_type,(yyvsp[-2].str),(yyvsp[-3].doc_node));
        doc_node_add_child((yyval.doc_node), (yyvsp[0].doc_node));
//        doc_node_add_child($2, $3);
    }
#line 2332 "SCDoc.tab.cpp"
    break;

  case 42: /* subsubsection: COPYMETHOD words eol  */
#line 195 "SCDoc.y"
                                    {
                if ( !(strchr((yyvsp[-1].str), ' ')) ) {
                  yyerror("COPYMETHOD requires 2 arguments (class name and method name)");
                  YYERROR;
                }

                (yyval.doc_node) = doc_node_make(
                stringEqual(method_type, "CMETHOD") ? "CCOPYMETHOD"
                                                    : (stringEqual(method_type, "IMETHOD") ? "ICOPYMETHOD"
                                                                                           : "COPYMETHOD"),
                (yyvsp[-1].str), NULL
                ); }
#line 2349 "SCDoc.tab.cpp"
    break;

  case 43: /* subsubsection: PRIVATE commalist eoleof  */
#line 207 "SCDoc.y"
                                        { (yyval.doc_node) = doc_node_make_take_children( stringEqual(method_type, "CMETHOD") ? "CPRIVATE"
                                                                                                                : "IPRIVATE",
                NULL, (yyvsp[-1].doc_node)); }
#line 2357 "SCDoc.tab.cpp"
    break;

  case 44: /* optMETHODARGS: %empty  */
#line 212 "SCDoc.y"
               { (yyval.str) = NULL; }
#line 2363 "SCDoc.tab.cpp"
    break;

  case 45: /* optMETHODARGS: "arguments string"  */
#line 214 "SCDoc.y"
    {
//        $$ = doc_node_make("ARGSTRING",$1,NULL);
        (yyval.str) = (yyvsp[0].str);
        if(!stringEqual(method_type, "METHOD")) {
            yyerror("METHOD argument string is not allowed inside CLASSMETHODS or INSTANCEMETHODS");
            YYERROR;
        }
    }
#line 2376 "SCDoc.tab.cpp"
    break;

  case 46: /* methodname: "method name"  */
#line 225 "SCDoc.y"
    {
        char *p = (yyvsp[0].str)+strlen((yyvsp[0].str))-1;
        if(*p=='_') {
            post("WARNING: SCDoc: In %s\n  Property setter %s should be documented without underscore.\n", scdoc_current_file, (yyvsp[0].str));
            *p = '\0';
        };
        (yyval.str) = (yyvsp[0].str);
    }
#line 2389 "SCDoc.tab.cpp"
    break;

  case 47: /* methnames: methnames COMMA methodname  */
#line 235 "SCDoc.y"
                                      { free((yyvsp[-1].str)); (yyvsp[-1].str) = NULL; (yyval.doc_node) = doc_node_add_child((yyvsp[-2].doc_node), doc_node_make("STRING",(yyvsp[0].str),NULL)); }
#line 2395 "SCDoc.tab.cpp"
    break;

  case 48: /* methnames: methodname  */
#line 236 "SCDoc.y"
                      { (yyval.doc_node) = doc_node_make("(METHODNAMES)",NULL,doc_node_make("STRING",(yyvsp[0].str),NULL)); }
#line 2401 "SCDoc.tab.cpp"
    break;

  case 49: /* methodbody: optbody optargs optreturns optdiscussion  */
#line 240 "SCDoc.y"
    {
        (yyval.doc_node) = doc_node_make_take_children("METHODBODY",NULL,(yyvsp[-3].doc_node));
        doc_node_add_child((yyval.doc_node), (yyvsp[-2].doc_node));
        doc_node_add_child((yyval.doc_node), (yyvsp[-1].doc_node));
        doc_node_add_child((yyval.doc_node), (yyvsp[0].doc_node));
    }
#line 2412 "SCDoc.tab.cpp"
    break;

  case 51: /* optbody: %empty  */
#line 249 "SCDoc.y"
         { (yyval.doc_node) = NULL; }
#line 2418 "SCDoc.tab.cpp"
    break;

  case 53: /* optargs: %empty  */
#line 253 "SCDoc.y"
         { (yyval.doc_node) = NULL; }
#line 2424 "SCDoc.tab.cpp"
    break;

  case 54: /* args: args arg  */
#line 256 "SCDoc.y"
               { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2430 "SCDoc.tab.cpp"
    break;

  case 55: /* args: arg  */
#line 257 "SCDoc.y"
          { (yyval.doc_node) = doc_node_make("ARGUMENTS",NULL,(yyvsp[0].doc_node)); }
#line 2436 "SCDoc.tab.cpp"
    break;

  case 56: /* arg: ARGUMENT words eol optbody  */
#line 260 "SCDoc.y"
                                { (yyval.doc_node) = doc_node_make_take_children("ARGUMENT", (yyvsp[-2].str), (yyvsp[0].doc_node)); }
#line 2442 "SCDoc.tab.cpp"
    break;

  case 57: /* arg: ARGUMENT eol body  */
#line 261 "SCDoc.y"
                       { (yyval.doc_node) = doc_node_make_take_children("ARGUMENT", NULL, (yyvsp[0].doc_node)); }
#line 2448 "SCDoc.tab.cpp"
    break;

  case 58: /* optreturns: RETURNS body  */
#line 264 "SCDoc.y"
                         { (yyval.doc_node) = doc_node_make_take_children("RETURNS",NULL,(yyvsp[0].doc_node)); }
#line 2454 "SCDoc.tab.cpp"
    break;

  case 59: /* optreturns: %empty  */
#line 265 "SCDoc.y"
            { (yyval.doc_node) = NULL; }
#line 2460 "SCDoc.tab.cpp"
    break;

  case 60: /* optdiscussion: DISCUSSION body  */
#line 268 "SCDoc.y"
                               { (yyval.doc_node) = doc_node_make_take_children("DISCUSSION",NULL,(yyvsp[0].doc_node)); }
#line 2466 "SCDoc.tab.cpp"
    break;

  case 61: /* optdiscussion: %empty  */
#line 269 "SCDoc.y"
               { (yyval.doc_node) = NULL; }
#line 2472 "SCDoc.tab.cpp"
    break;

  case 64: /* blockA: blockB bodyelem  */
#line 281 "SCDoc.y"
                        { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2478 "SCDoc.tab.cpp"
    break;

  case 65: /* blockA: blockA bodyelem  */
#line 282 "SCDoc.y"
                        { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2484 "SCDoc.tab.cpp"
    break;

  case 66: /* blockA: bodyelem  */
#line 283 "SCDoc.y"
                 { (yyval.doc_node) = doc_node_make("(SECTIONBODY)",NULL,(yyvsp[0].doc_node)); }
#line 2490 "SCDoc.tab.cpp"
    break;

  case 67: /* blockB: blockA prose  */
#line 286 "SCDoc.y"
                     { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2496 "SCDoc.tab.cpp"
    break;

  case 68: /* blockB: prose  */
#line 287 "SCDoc.y"
              { (yyval.doc_node) = doc_node_make("(SECTIONBODY)",NULL,(yyvsp[0].doc_node)); }
#line 2502 "SCDoc.tab.cpp"
    break;

  case 69: /* bodyelem: rangetag body "::"  */
#line 290 "SCDoc.y"
                               { (yyval.doc_node) = doc_node_make_take_children((yyvsp[-2].id),NULL,(yyvsp[-1].doc_node)); }
#line 2508 "SCDoc.tab.cpp"
    break;

  case 70: /* bodyelem: listtag listbody "::"  */
#line 291 "SCDoc.y"
                                  { (yyval.doc_node) = doc_node_make_take_children((yyvsp[-2].id),NULL,(yyvsp[-1].doc_node)); }
#line 2514 "SCDoc.tab.cpp"
    break;

  case 71: /* bodyelem: TABLE tablebody "::"  */
#line 292 "SCDoc.y"
                                 { (yyval.doc_node) = doc_node_make_take_children("TABLE",NULL,(yyvsp[-1].doc_node)); }
#line 2520 "SCDoc.tab.cpp"
    break;

  case 72: /* bodyelem: DEFINITIONLIST deflistbody "::"  */
#line 293 "SCDoc.y"
                                            { (yyval.doc_node) = doc_node_make_take_children("DEFINITIONLIST",NULL,(yyvsp[-1].doc_node)); }
#line 2526 "SCDoc.tab.cpp"
    break;

  case 73: /* bodyelem: blocktag wordsnl "::"  */
#line 294 "SCDoc.y"
                                  { (yyval.doc_node) = doc_node_make((yyvsp[-2].id),(yyvsp[-1].str),NULL); }
#line 2532 "SCDoc.tab.cpp"
    break;

  case 74: /* bodyelem: CLASSTREE words eoleof  */
#line 295 "SCDoc.y"
                                 { (yyval.doc_node) = doc_node_make("CLASSTREE",(yyvsp[-1].str),NULL); }
#line 2538 "SCDoc.tab.cpp"
    break;

  case 75: /* bodyelem: KEYWORD commalist eoleof  */
#line 296 "SCDoc.y"
                                   { (yyval.doc_node) = doc_node_make_take_children("KEYWORD",NULL,(yyvsp[-1].doc_node));
//            printf("keyword '%s'\n",$2->children[0]->text);
        }
#line 2546 "SCDoc.tab.cpp"
    break;

  case 76: /* bodyelem: "empty lines"  */
#line 299 "SCDoc.y"
                     { (yyval.doc_node) = NULL; }
#line 2552 "SCDoc.tab.cpp"
    break;

  case 77: /* bodyelem: IMAGE words2 "::"  */
#line 300 "SCDoc.y"
                              { (yyval.doc_node) = doc_node_make("IMAGE",(yyvsp[-1].str),NULL); }
#line 2558 "SCDoc.tab.cpp"
    break;

  case 78: /* prose: prose proseelem  */
#line 303 "SCDoc.y"
                       { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node), (yyvsp[0].doc_node)); }
#line 2564 "SCDoc.tab.cpp"
    break;

  case 79: /* prose: proseelem  */
#line 304 "SCDoc.y"
                 { (yyval.doc_node) = doc_node_make("PROSE",NULL,(yyvsp[0].doc_node)); }
#line 2570 "SCDoc.tab.cpp"
    break;

  case 80: /* proseelem: anyword  */
#line 307 "SCDoc.y"
                   { (yyval.doc_node) = doc_node_make(NODE_TEXT,(yyvsp[0].str),NULL); }
#line 2576 "SCDoc.tab.cpp"
    break;

  case 81: /* proseelem: URL  */
#line 308 "SCDoc.y"
               { (yyval.doc_node) = doc_node_make("LINK",(yyvsp[0].str),NULL); }
#line 2582 "SCDoc.tab.cpp"
    break;

  case 82: /* proseelem: inlinetag words "::"  */
#line 309 "SCDoc.y"
                                  { (yyval.doc_node) = doc_node_make((yyvsp[-2].id),(yyvsp[-1].str),NULL); }
#line 2588 "SCDoc.tab.cpp"
    break;

  case 83: /* proseelem: FOOTNOTE body "::"  */
#line 310 "SCDoc.y"
                                { (yyval.doc_node) = doc_node_make_take_children("FOOTNOTE",NULL,(yyvsp[-1].doc_node)); }
#line 2594 "SCDoc.tab.cpp"
    break;

  case 84: /* proseelem: "newline"  */
#line 311 "SCDoc.y"
                   { (yyval.doc_node) = doc_node_create(NODE_NL); }
#line 2600 "SCDoc.tab.cpp"
    break;

  case 85: /* inlinetag: LINK  */
#line 314 "SCDoc.y"
                { (yyval.id) = "LINK"; }
#line 2606 "SCDoc.tab.cpp"
    break;

  case 86: /* inlinetag: STRONG  */
#line 315 "SCDoc.y"
                  { (yyval.id) = "STRONG"; }
#line 2612 "SCDoc.tab.cpp"
    break;

  case 87: /* inlinetag: SOFT  */
#line 316 "SCDoc.y"
                { (yyval.id) = "SOFT"; }
#line 2618 "SCDoc.tab.cpp"
    break;

  case 88: /* inlinetag: EMPHASIS  */
#line 317 "SCDoc.y"
                    { (yyval.id) = "EMPHASIS"; }
#line 2624 "SCDoc.tab.cpp"
    break;

  case 89: /* inlinetag: CODE  */
#line 318 "SCDoc.y"
                { (yyval.id) = "CODE"; }
#line 2630 "SCDoc.tab.cpp"
    break;

  case 90: /* inlinetag: TELETYPE  */
#line 319 "SCDoc.y"
                    { (yyval.id) = "TELETYPE"; }
#line 2636 "SCDoc.tab.cpp"
    break;

  case 91: /* inlinetag: MATH  */
#line 320 "SCDoc.y"
                { (yyval.id) = "MATH"; }
#line 2642 "SCDoc.tab.cpp"
    break;

  case 92: /* inlinetag: ANCHOR  */
#line 321 "SCDoc.y"
                  { (yyval.id) = "ANCHOR"; }
#line 2648 "SCDoc.tab.cpp"
    break;

  case 93: /* blocktag: "CODE block"  */
#line 324 "SCDoc.y"
                    { (yyval.id) = "CODEBLOCK"; }
#line 2654 "SCDoc.tab.cpp"
    break;

  case 94: /* blocktag: "MATH block"  */
#line 325 "SCDoc.y"
                    { (yyval.id) = "MATHBLOCK"; }
#line 2660 "SCDoc.tab.cpp"
    break;

  case 95: /* blocktag: "TELETYPE block"  */
#line 326 "SCDoc.y"
                        { (yyval.id) = "TELETYPEBLOCK"; }
#line 2666 "SCDoc.tab.cpp"
    break;

  case 96: /* listtag: LIST  */
#line 329 "SCDoc.y"
              { (yyval.id) = "LIST"; }
#line 2672 "SCDoc.tab.cpp"
    break;

  case 97: /* listtag: TREE  */
#line 330 "SCDoc.y"
              { (yyval.id) = "TREE"; }
#line 2678 "SCDoc.tab.cpp"
    break;

  case 98: /* listtag: NUMBEREDLIST  */
#line 331 "SCDoc.y"
                      { (yyval.id) = "NUMBEREDLIST"; }
#line 2684 "SCDoc.tab.cpp"
    break;

  case 99: /* rangetag: WARNING  */
#line 334 "SCDoc.y"
                  { (yyval.id) = "WARNING"; }
#line 2690 "SCDoc.tab.cpp"
    break;

  case 100: /* rangetag: NOTE  */
#line 335 "SCDoc.y"
               { (yyval.id) = "NOTE"; }
#line 2696 "SCDoc.tab.cpp"
    break;

  case 101: /* listbody: listbody "##" body  */
#line 338 "SCDoc.y"
                               { (yyval.doc_node) = doc_node_add_child((yyvsp[-2].doc_node), doc_node_make_take_children("ITEM",NULL,(yyvsp[0].doc_node))); }
#line 2702 "SCDoc.tab.cpp"
    break;

  case 102: /* listbody: "##" body  */
#line 339 "SCDoc.y"
                      { (yyval.doc_node) = doc_node_make("(LISTBODY)",NULL, doc_node_make_take_children("ITEM",NULL,(yyvsp[0].doc_node))); }
#line 2708 "SCDoc.tab.cpp"
    break;

  case 103: /* tablerow: "##" tablecells  */
#line 342 "SCDoc.y"
                            { (yyval.doc_node) = doc_node_make_take_children("TABROW",NULL,(yyvsp[0].doc_node)); }
#line 2714 "SCDoc.tab.cpp"
    break;

  case 104: /* tablebody: tablebody tablerow  */
#line 345 "SCDoc.y"
                              { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2720 "SCDoc.tab.cpp"
    break;

  case 105: /* tablebody: tablerow  */
#line 346 "SCDoc.y"
                    { (yyval.doc_node) = doc_node_make("(TABLEBODY)",NULL,(yyvsp[0].doc_node)); }
#line 2726 "SCDoc.tab.cpp"
    break;

  case 106: /* tablecells: tablecells "||" optbody  */
#line 349 "SCDoc.y"
                                    { (yyval.doc_node) = doc_node_add_child((yyvsp[-2].doc_node), doc_node_make_take_children("TABCOL",NULL,(yyvsp[0].doc_node))); }
#line 2732 "SCDoc.tab.cpp"
    break;

  case 107: /* tablecells: optbody  */
#line 350 "SCDoc.y"
                    { (yyval.doc_node) = doc_node_make("(TABLECELLS)",NULL, doc_node_make_take_children("TABCOL",NULL,(yyvsp[0].doc_node))); }
#line 2738 "SCDoc.tab.cpp"
    break;

  case 108: /* defterms: defterms "##" body  */
#line 353 "SCDoc.y"
                               { (yyval.doc_node) = doc_node_add_child((yyvsp[-2].doc_node),doc_node_make_take_children("TERM",NULL,(yyvsp[0].doc_node))); }
#line 2744 "SCDoc.tab.cpp"
    break;

  case 109: /* defterms: "##" body  */
#line 354 "SCDoc.y"
                      { (yyval.doc_node) = doc_node_make("(TERMS)",NULL,doc_node_make_take_children("TERM",NULL,(yyvsp[0].doc_node))); }
#line 2750 "SCDoc.tab.cpp"
    break;

  case 110: /* deflistrow: defterms "||" optbody  */
#line 358 "SCDoc.y"
    {
        (yyval.doc_node) = doc_node_make_take_children("DEFLISTITEM", NULL, (yyvsp[-2].doc_node));
        doc_node_add_child((yyval.doc_node), doc_node_make_take_children("DEFINITION", NULL, (yyvsp[0].doc_node)));
    }
#line 2759 "SCDoc.tab.cpp"
    break;

  case 111: /* deflistbody: deflistbody deflistrow  */
#line 364 "SCDoc.y"
                                    { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2765 "SCDoc.tab.cpp"
    break;

  case 112: /* deflistbody: deflistrow  */
#line 365 "SCDoc.y"
                        { (yyval.doc_node) = doc_node_make("(DEFLISTBODY)",NULL,(yyvsp[0].doc_node)); }
#line 2771 "SCDoc.tab.cpp"
    break;

  case 117: /* words: words anyword  */
#line 376 "SCDoc.y"
                     { (yyval.str) = strmerge((yyvsp[-1].str),(yyvsp[0].str)); }
#line 2777 "SCDoc.tab.cpp"
    break;

  case 119: /* words2: words2 anywordurl  */
#line 380 "SCDoc.y"
                          { (yyval.str) = strmerge((yyvsp[-1].str),(yyvsp[0].str)); }
#line 2783 "SCDoc.tab.cpp"
    break;

  case 126: /* anywordnl: eol  */
#line 393 "SCDoc.y"
               { (yyval.str) = strdup("\n"); }
#line 2789 "SCDoc.tab.cpp"
    break;

  case 127: /* wordsnl: wordsnl anywordnl  */
#line 396 "SCDoc.y"
                           { (yyval.str) = strmerge((yyvsp[-1].str),(yyvsp[0].str)); }
#line 2795 "SCDoc.tab.cpp"
    break;

  case 129: /* nocommawords: nocommawords "text"  */
#line 400 "SCDoc.y"
                                { (yyval.str) = strmerge((yyvsp[-1].str),(yyvsp[0].str)); }
#line 2801 "SCDoc.tab.cpp"
    break;

  case 130: /* nocommawords: nocommawords URL  */
#line 401 "SCDoc.y"
                                { (yyval.str) = strmerge((yyvsp[-1].str),(yyvsp[0].str)); }
#line 2807 "SCDoc.tab.cpp"
    break;

  case 133: /* commalist: commalist COMMA nocommawords  */
#line 406 "SCDoc.y"
                                        { free((yyvsp[-1].str)); (yyvsp[-1].str)=NULL; (yyval.doc_node) = doc_node_add_child((yyvsp[-2].doc_node),doc_node_make("STRING",(yyvsp[0].str),NULL)); }
#line 2813 "SCDoc.tab.cpp"
    break;

  case 134: /* commalist: nocommawords  */
#line 407 "SCDoc.y"
                        { (yyval.doc_node) = doc_node_make("(COMMALIST)",NULL,doc_node_make("STRING",(yyvsp[0].str),NULL)); }
#line 2819 "SCDoc.tab.cpp"
    break;


#line 2823 "SCDoc.tab.cpp"

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
  *++yylsp = yyloc;

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= END)
        {
          /* Return failure if at end of input.  */
          if (yychar == END)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
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
  ++yynerrs;

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 410 "SCDoc.y"


DocNode * scdoc_parse_run(int mode) {
    int modes[] = {START_FULL, START_PARTIAL, START_METADATA};
    if(mode<0 || mode>=sizeof(modes)) {
        error("scdoc_parse_run(): unknown mode: %d\n",mode);
    }
    scdoc_start_token = modes[mode];
/*    scdoc_start_token = START_FULL;
    scdoc_metadata_mode = 0;
    if(mode==SCDOC_PARSE_PARTIAL) {
        scdoc_start_token = START_PARTIAL;
    } else
    if(mode==SCDOC_PARSE_METADATA) {
        scdoc_metadata_mode = 1;
    }*/
    topnode = NULL;
    method_type = "METHOD";
    if(scdocparse()!=0) {
        return NULL;
    }
    return topnode;
}

void scdocerror(const char *str)
{
    error("In %s:\n  At line %d: %s\n\n",scdoc_current_file,scdoclineno,str);

/*  FIXME: this does not work well, since the reported linenumber is often *after* the actual error line
    fseek(scdocin, 0, SEEK_SET);
    int line = 1;
    char buf[256],*txt;
    while(line!=scdoclineno && !feof(scdocin)) {
        int c = fgetc(scdocin);
        if(c=='\n') line++;
    }
    txt = fgets(buf, 256, scdocin);
    if(txt)
        fprintf(stderr,"  %s\n-------------------\n", txt);
*/
}

