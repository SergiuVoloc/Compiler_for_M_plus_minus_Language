// Main.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
//#include "symbols.h"
#include <errno.h>
#include "ast.h"
#include "SemanticAnalyzer.h"

 
extern int yyparse(void);
extern FILE* yyin;
extern int yylex(void);
extern int yydebug;
extern Node* astRoot;


//const char* lexUnits[] = {  "END",//0
//							"INT",//1
//							"WHILE",//2
//							"FLOAT",//3
//							"IF",//4
//							"ELSE",//5
//							"RETURN",//6
//							"STRING_LITERAL",//7
//							"ASSIGN",//8
//							"ADD",//9
//	                        "BOOL",//10
//							"IDENTIFIER",//11
//                            "AND",//12
//                            "BVAL",//13
//                            "CEIL",//14
//	                        "CLPAR",//15
//                            "COLON",//16
//                            "COMMA",//17
//                            "CRPAR", //18
//	                        "DIV", //19
//                            "DO",//20
//                            "EQUAL",//21
//                            "FLOOR",//22
//                            "FUN",//23
//                            "GE",//24
//                            "GT",//25
//                         	"ID",//26
//                            "IVAL",//27
//                            "LE",//28
//                            "MUL",//29
//                            "NOT",//30
//                            "OR",//31
//                            "READ",//32
//                            "RPAR",//33
//                            "RVAL",//34
//                            "SEMICLON",//35
//                            "SIZE",//36
//                            "SLPAR",//37
//                            "SRPAR",//38
//                            "SUB",//39
//                            "THEN",//40
//                            "VAR",//41
//                            "LPAR",//42
//                            "LT",//43
//                            "BEGIN"};//44


int main()
{
	//int lexUnit = 0;
	//yydebug = 1;
	yyin = fopen("input.csrc", "rt");
	if (yyin != NULL)
	{
		int result = yyparse();
		switch (result)
		{
		case 0:
			printf("Parse successfull.\n");
			break;

		case 1:
			printf("Invalid input encountered\n");
			break;

		case 2:
			printf("Out of memory\n");
			break;

		default:
			break;
		}
		printAst(astRoot, 0);

		symTableEntryList = malloc(sizeof(SymTableEntry) * 1000);

		fclose(yyin);
	}
	else
	{
		printf("Fisier inexistent");
	}

	SymbolsList* symTable = generateSymbolsTable(astRoot);
	if (symTable)
	{
		printSymbolsList(symTable);
	}
	else
	{
		printf("Unable to generate symbols table. Probably not enough memory available");
	}

}


