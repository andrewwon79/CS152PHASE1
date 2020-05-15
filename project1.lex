%{
#include <stdio.h>      
#include "project1.tab.h"
int currLine = 1, currPos = 1;
%}

DIGIT    [0-9]
LETTER [a-zA-Z]
UNDERSCORE [_]   
COMMENTS [##]
%%
"function"     {return FUNCTION; currPos +=yyleng;}
"beginparams"     {return BEGIN_PARAMS; currPos +=yyleng;}
"endparams"     {return END_PARAMS; currPos +=yyleng;}
"beginlocals"     {return BEGIN_LOCALS; currPos +=yyleng;}
"endlocals"     {return END_LOCALS; currPos +=yyleng;}
"beginbody"     {return BEGIN_BODY; currPos +=yyleng;}
"endbody"	{return END_BODY; currPos +=yyleng;}
"integer"     {return INTEGER; currPos +=yyleng;}
"array"     {return ARRAY; currPos +=yyleng;}
"of"     {return OF; currPos +=yyleng;}
"if"     {return IF; currPos +=yyleng;}
"then"     {return THEN; currPos +=yyleng;}
"endif"     {return ENDIF; currPos +=yyleng;}
"else"     {return ELSE; currPos +=yyleng;}
"while"     {return WHILE; currPos +=yyleng;}
"do"     {return DO; currPos +=yyleng;}
"for"     {return FOR; currPos +=yyleng;}
"beginloop"     {return BEGINLOOP; currPos +=yyleng;}
"endloop"     {return ENDLOOP; currPos +=yyleng;}
"continue"     {return CONTINUE; currPos +=yyleng;}
"read"     {return READ; currPos +=yyleng;}
"write"     {return WRITE; currPos +=yyleng;}
"and"     {return AND; currPos +=yyleng;}
"or"     {return OR; currPos +=yyleng;}
"not"     {return NOT; currPos +=yyleng;}
"true"     {return TRUE; currPos +=yyleng;}
"false"     {return FALSE; currPos +=yyleng;}
"return"     {return RETURN; currPos +=yyleng;}
"<>"     {return NEQ; currPos +=yyleng;}
"<"     {return '<'; currPos +=yyleng;}
">"     {return '>'; currPos +=yyleng;}
"<="     {return LTE; currPos +=yyleng;}
">="     {return GTE; currPos +=yyleng;}
"-"            {return '-'; currPos += yyleng;}
"+"            {return '+'; currPos += yyleng;}
"*"            {return '*'; currPos += yyleng;}
"/"            {return '/'; currPos += yyleng;}
"=="            {return EQ; currPos += yyleng;}
"("            {return '('; currPos += yyleng;}
")"            {return ')'; currPos += yyleng;}
"%"     {return '%'; currPos +=yyleng;}
";"     {return ';'; currPos +=yyleng;}
":"     {return ':'; currPos +=yyleng;}
","     {return ','; currPos +=yyleng;}
"["     {return '['; currPos +=yyleng;}
"]"     {return ']'; currPos +=yyleng;}
":="     {return ASSIGN; currPos +=yyleng;}
{DIGIT}+       {yylval.float_value=atof(yytext);return NUMBER; currPos += yyleng;}
{DIGIT}+({LETTER}|{DIGIT}|{UNDERSCORE})* {printf("Error at line %d, column %d, with identifier \"%s\" identifiers must start with a letter\n", currLine,currPos,yytext);exit(0);}
{LETTER}(({LETTER}|{DIGIT}|{UNDERSCORE})*({LETTER}|{DIGIT})+)*	{yylval.str_value=strdup(yytext);return IDENTIFIER;currPos+=yyleng;}
[ \t]+         {/* ignore spaces */ currPos += yyleng;}
{COMMENTS}.*	       {currLine++;currPos=1;}
"\n"           {currLine++; currPos = 1;}
.              {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

%%

/*int main(int argc, char ** argv)
{
   yylex();
}*/

