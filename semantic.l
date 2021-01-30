%option noyywrap yylineno
%{
  #include <string.h>
  #include "semantic.tab.h"
  #include "defs.h"
  extern YYSTYPE yylval;
%}

%% 
"//".*										
"/*"([^*]|"\n"|(\*+([^*/]|"\n")))*"*"+"/"
" "
[ \t\n]+ 
"?"										{/*printf("\n[QM]:     \t %s\n", yytext);*/ return QM;}
":"										{/*printf("\n[DT]:     \t %s\n", yytext);*/ return DT;}
"++"										{/*printf("\n[INC]:     \t %s\n", yytext);*/ return INC;}
"--"										{/*printf("\n[DEC]:     \t %s\n", yytext);*/ return DEC;}
"<!-"										{/*printf("\n[LOOPL]:     \t %s\n", yytext);*/ return LOOPL;}
"-!>"										{/*printf("\n[LOOPR]:     \t %s\n", yytext);*/ return LOOPR;}
"loop"										{/*printf("\n[LOOP]:     \t %s\n", yytext);*/ return LOOP;}
"puka"						 				{/*printf("\n[PUKA]:     \t %s\n", yytext);*/ return PUKA;}
"manawa"									{/*printf("\n[MANAWA]:     \t %s\n", yytext);*/ return MANAWA;}
"hopau"									{/*printf("\n[HOPAU]:     \t %s\n", yytext);*/ return HOPAU;}
"check"									{/*printf("\n[CHECK]:     \t %s\n", yytext);*/ return CHECK;}
"when"										{/*printf("\n[WHEN]:     \t %s\n", yytext);*/ return WHEN;}
"break"									{/*printf("\n[BREAK]:     \t %s\n", yytext);*/ return BREAK;}
"otherwise"									{/*printf("\n[OTHERWISE]:     \t %s\n", yytext);*/ return OTHERWISE;}
function									{/*printf("\n[FUNC]:     \t %s\n", yytext);*/ return FUNC;}
return										{/*printf("\n[KEYW]:     \t %s\n", yytext);*/ return RETURN;}
void										{/*printf("\n[TYPE]:     \t %s\n", yytext);*/ yylval.i = VOID; return TYPE;}
int										{/*printf("\n[TYPE]:     \t %s\n", yytext);*/ yylval.i = INT; return TYPE;}
unsigned" "int									{/*printf("\n[TYPE]:     \t %s\n", yytext);*/ yylval.i = UINT; return TYPE;}
if										{/*printf("\n[IF]:       \t %s\n", yytext);*/ return IF;}
else										{/*printf("\n[ELSE]:     \t %s\n", yytext);*/ return ELSE;}
[a-zA-Z]|[a-zA-Z][a-zA-Z0-9]*							{/*printf("\n[ID]:       \t %s\n", yytext);*/ yylval.s = strdup(yytext); return ID;}
"=>"										{/*printf("\n[EC]:   \t %s\n", yytext);*/ return EC;}
"<"										{/*printf("\n[REL_OP]:   \t %s\n", yytext);*/ yylval.i = LT; return REL_OP;}
">"										{/*printf("\n[REL_OP]:   \t %s\n", yytext);*/ yylval.i = GT; return REL_OP;}
"<="										{/*printf("\n[REL_OP]:   \t %s\n", yytext);*/ yylval.i = LE; return REL_OP;}
">="										{/*printf("\n[REL_OP]:   \t %s\n", yytext);*/ yylval.i = GE; return REL_OP;}
"!="										{/*printf("\n[REL_OP]:   \t %s\n", yytext);*/ yylval.i = NE; return REL_OP;}
"=="										{/*printf("\n[REL_OP]:   \t %s\n", yytext);*/ yylval.i = EQ; return REL_OP;}
"="										{/*printf("\n[EQ_OP]:    \t %s\n", yytext);*/ return EQ_OP;}
"+"										{/*printf("\n[ADD/SUB]:  \t %s\n", yytext);*/ yylval.i = ADD; return ADD_SUB;}
"-"										{/*printf("\n[ADD/SUB]:  \t %s\n", yytext);*/ yylval.i = SUB; return ADD_SUB;}
"("										{/*printf("\n[LBRA]:     \t %s\n", yytext);*/ return LBRA;}
")"										{/*printf("\n[RBRA]:     \t %s\n", yytext);*/ return RBRA;}
"{"										{/*printf("\n[LCURLYBRA]:\t %s\n", yytext);*/ return LCURLYBRA;}
"}"										{/*printf("\n[RCURLYBRA]:\t %s\n", yytext);*/ return RCURLYBRA;}
; 										{/*printf("\n[SEMI]:     \t %s\n", yytext);*/ return SEMI;}
,										{/*printf("\n[COMMA]:    \t %s\n", yytext);*/ return COMMA;}
[-+]?[0-9]{1,10}								{/*printf("\n[NUM]:      \t %s\n", yytext);*/ yylval.s = strdup(yytext); return INUM;}
[0-9]{1,10}[uU]								{/*printf("\n[UINUM]:    \t %s\n", yytext);*/ yylval.s = strdup(yytext); 
                       yylval.s[yyleng-1] = 0; return UINUM;}
                       
.           									{printf("\nline %d: LEXICAL ERROR on char %c", yylineno, *yytext); }  
%%
