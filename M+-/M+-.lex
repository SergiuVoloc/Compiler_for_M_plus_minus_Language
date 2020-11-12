digit		[0-9]
alpha		[a-zA-Z]

%{
#include <stdio.h>
#include "c.tab.h" 

void count();
%}

%%
"/*"		{ comment(); }
"%"			{ comment(); } 

"if"		{ count(); return(IF); }
"then"		{ count(); return(THEN); }
"while"		{ count(); return(WHILE); }
"do"		{ count(); return(DO); }
"read"		{ count(); return(READ); }
"real"		{ count(); return(REAL); }
"else"		{ count(); return(ELSE); }
"begin"		{ count(); return(BEGINN); }
"end"		{ count(); return(END); }
"int"		{ count(); return(INT); }
"bool"		{ count(); return(BOOL); }
"var"		{ count(); return(VAR); }
"size"		{ count(); return(SIZE); }
"float"		{ count(); return(FLOAT); }
"floor"		{ count(); return(FLOOR); }
"ceil"		{ count(); return(CEIL); }
"fun"		{ count(); return(FUN); }
"return"	{ count(); return(RETURN);}
"not"		{ count(); return(NOT); }
"false"		{ count(); return(BVAL);} 
"true"		{ count(); return(BVAL);}	
"print"		{ count(); return(PRINT);}


":="			{ count(); return(ASSIGN); }
"+"				{ count(); return(ADD); }
"-"				{ count(); return(SUB); }
"*"				{ count(); return(MUL); }
"/"				{ count(); return(DIV); }
"&&"			{ count(); return(AND); }
"||"			{ count(); return(OR); }
"="				{ count(); return(EQUAL); }
"<"				{ count(); return(LT); }
">"				{ count(); return(GT); }
"=<"			{ count(); return(LE); }
"=>"			{ count(); return(GE); }
"("				{ count(); return(LPAR); }
")"				{ count(); return(RPAR); }
"{"				{ count(); return(CLPAR); }
"}"				{ count(); return(CRPAR); }
"["				{ count(); return(SLPAR); }
"]"				{ count(); return(SRPAR); }
":"				{ count(); return(COLON); }
";"				{ count(); return(SEMICOLON); }
","				{ count(); return(COMMA); }




({alpha}+)([_{alpha}{digit}])*	{ count(); return(ID);}
{digit}+						{ count(); return(IVAL);}  
{digit}*.{digit}+				{ count(); return(RVAL);}
	



{alpha}?\"(\\.|[^\\"])*\"		{ count(); return(STRING_LITERAL); }






[ \t\v\n\f]		{ count(); }
.				{ /* ignore bad characters */ }
	


%%

yywrap()
{
	return(1);
}


comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}


int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}


int check_type()
{

	return(IDENTIFIER);
}