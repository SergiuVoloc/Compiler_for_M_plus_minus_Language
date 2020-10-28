// M+-.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "symbols.h"
#include <errno.h>

 
extern FILE* yyin;
extern int yylex(void);
const char* lexUnits[] = { "END",//0
							"INT",//1
							"WHILE",//2
							"FLOAT",//3
							"IF",//4
							"ELSE",//5
							"RETURN",//6
							"STRING_LITERAL",//7
							"ASSIGN",//8
							"ADD",//9
	                        "BOOL",//10
							"IDENTIFIER",//11
                            "AND",//12
                            "BVAL",//13
                            "CEIL",//14
	                        "CLPAR",//15
                            "COLON",//16
                            "COMMA",//17
                            "CRPAR", //18
	                        "DIV", //19
                            "DO",//20
                            "EQUAL",//21
                            "FLOOR",//22
                            "FUN",//23
                            "GE",//24
                            "GT",//25
                         	"ID",//26
                            "IVAL",//27
                            "LE",//28
                            "MUL",//29
                            "NOT",//30
                            "OR",//31
                            "READ",//32
                            "RPAR",//33
                            "RVAL",//34
                            "SEMICLON",//35
                            "SIZE",//36
                            "SLPAR",//37
                            "SRPAR",//38
                            "SUB",//39
                            "THEN",//40
                            "VAR",//41
                            "LPAR",//42
                            "LT",//43
                            "BEGIN"};//44

int main()
{
	int tokenValue = 0;
	yyin = fopen("input.csrc", "rt");
	if (yyin != NULL)
	{
		while ((tokenValue = yylex()) != END)
		{
			printf(" -> TOKEN ID: %d; Token Value: %s \n", tokenValue, lexUnits[tokenValue]);
		}
	}
	else
	{
		printf("Fisierul de intrare nu poate fi deschis. Erorare: %d", errno);
	}


}

