
#include <malloc.h>
#include <string.h>
#include <stdio.h>
#include "ast.h"

Node* createDefaultNode(const char* nodeName, unsigned int linksCount)
{
	Node* retNode = (Node*)malloc(sizeof(Node));
	if (retNode)
	{
		memset(retNode, 0, sizeof(Node));
		if (nodeName)
		{
			strcpy(retNode->type, nodeName);
		}
		retNode->numLinks = linksCount;
		if (linksCount > 0)
		{
			retNode->links = (Node**)malloc(linksCount * sizeof(Node*));
		}
	}
	return retNode;
}

Node* resizeNodeLinks(Node* nodeToResize, unsigned int newSize)
{
	if (nodeToResize->numLinks == 0)
	{
		nodeToResize->links = (Node**)malloc(newSize * sizeof(Node*));
	}
	else
	{
		nodeToResize->links = (Node**)realloc(nodeToResize->links, newSize * sizeof(Node*));
	}
	nodeToResize->numLinks = newSize;
	return nodeToResize;
}

Node* createListNode(const char* listName, Node* firstLink)
{
	Node* retNode = createDefaultNode(listName, 1);
	retNode->links[0] = firstLink;
	return retNode;
}

Node* createEmptyListNode(const char* listName)
{
	Node* retNode = createDefaultNode(listName, 0);
	return retNode;
}

Node* createProgStmt_assign_expr(Node* identifier, Node* expr)
{
	Node* retNode = createDefaultNode("ProgStmt_assign_expr", 2);
	if (retNode)
	{
		retNode->links[0] = identifier;
		retNode->links[1] = expr;
	}

	return retNode;
}

Node* createProgStmt_print_expr(Node* expr)
{
	Node* retNode = createDefaultNode("ProgStmt_print_expr", 1);
	if (retNode)
	{
		retNode->links[0] = expr;
	}

	return retNode;
}

Node* createProgStmt_block(Node* expr)
{
	Node* retNode = createDefaultNode("ProgStmt_block", 1);
	if (retNode)
	{
		retNode->links[0] = expr;
	}

	return retNode;
}

Node* createSubstractOperation(Node* intFactor)
{
	Node* retNode = createDefaultNode("SubtractOperation", 1);
	if (retNode)
	{
		retNode->links[0] = intFactor;
	}

	return retNode;
}



void addLinkToList(Node* listNode, Node* linkToAdd)
{
	unsigned int numLinks = listNode->numLinks;
	resizeNodeLinks(listNode, numLinks + 1);
	listNode->links[numLinks] = linkToAdd;
}


Node* createProgNode(Node* block)
{
	Node* retNode = createDefaultNode("Prog", 1);
	if (retNode)
	{
		retNode->links[0] = block;
	}

	return retNode;

}

Node* createBlockNode(Node* declarations, Node* programBody) {

	Node* retNode = createDefaultNode("BlockNode", 2);

	retNode->links[0] = declarations;
	retNode->links[1] = programBody;
	return retNode;

}



Node* createDeclarationNode(Node* varFunDeclaration)
{
	Node* retNode = createDefaultNode("Declaration", 1);
	if (retNode)
	{
		retNode->links[0] = varFunDeclaration;
	}
	return retNode;
}

Node* createVarDeclarationNode(const char* ID, Node* arrayDim, Node* type)
{
	Node* retNode = createDefaultNode("VarDeclaration", 2);

	if (retNode)
	{
		retNode->links[0] = arrayDim;
		retNode->links[1] = type;
		sprintf(retNode->extraData, "%s", ID);
	}

	return retNode;

}


Node* createType(const char* typeName)
{
	Node* retVal = createDefaultNode("Type", 0);
	if (typeName)
		sprintf(retVal->extraData, "%s", typeName);
	return retVal;
}



Node* createFunDeclarationNode(Node* paramsList, Node* type, Node* funBlock)
{
	Node* retNode = createDefaultNode("FunDeclaration", 3);

	if (retNode)
	{
		retNode->links[0] = paramsList;
		retNode->links[1] = type;
		retNode->links[2] = funBlock;
	}

	return retNode;
}


Node* createFunBlockNode(Node* declarations, Node* funBody)
{
	Node* retNode = createDefaultNode("FunBlock", 2);

	if (retNode)
	{
		retNode->links[0] = declarations;
		retNode->links[1] = funBody;
	}

	return retNode;
}



Node* createParametersNode(Node* basicDeclaration, Node* moreParameters)
{
	Node* retNode = createDefaultNode("Parameters", 2);

	if (retNode)
	{
		retNode->links[0] = basicDeclaration;
		retNode->links[1] = moreParameters;
	}

	return retNode;
}



Node* createBasicDeclarationNode(Node* BS_dimensions, Node* type)
{

	Node* retNode = createDefaultNode("BasicDeclaration", 2);

	if (retNode)
	{
		retNode->links[0] = BS_dimensions;
		retNode->links[1] = type;
	}
	return retNode;
}



Node* createProgramBodyNode(Node* programStatement)
{
	Node* retNode = createDefaultNode("ProgramBody", 1);

	if (retNode)
	{
		retNode->links[0] = programStatement;
	}
	return retNode;
}


Node* createFunBodyNode(Node* programStatement, Node* expr)
{
	Node* retNode = createDefaultNode("FunBody", 2);

	if (retNode)
	{
		retNode->links[0] = programStatement;
		retNode->links[1] = expr;
	}
	return retNode;
}



Node* createWhileStatement(Node* expr, Node* doProg)
{
	Node* retNode = createDefaultNode("WhileStmt", 2);

	if (retNode)
	{
		retNode->links[0] = expr;
		retNode->links[1] = doProg;
	}
	return retNode;
}



Node* Prog_stms_read_identifier( Node* identifier)
{

	Node* retNode = createDefaultNode("read_identifier", 1);

	if (retNode)
	{
		retNode->links[0] = identifier;
	
	}

	return retNode;
}



Node* createIdentifierNode(Node* array_dimensions)
{
	Node* retNode = createDefaultNode("Create_Identifier", 1);

	if (retNode)
	{
		retNode->links[0] = array_dimensions;
	}
	return retNode;
}



Node* createBintFactorNode(Node* firstIntExpr , Node* compareOperand, Node* secondIntExpr)
{
	Node* retNode = createDefaultNode("BindFactor", 2);

	if (retNode)
	{
		retNode->links[0] = firstIntExpr;
		retNode->links[1] = compareOperand;
		retNode->links[1] = secondIntExpr;
	}
	return retNode;
}


Node* createEqualNode(const char* operatorName)
{
	Node* retVal = createDefaultNode("Equal", 0);
	if (operatorName)
		sprintf(retVal->extraData, "%s", operatorName);
	return retVal;
}


Node* createLessThanNode(const char* operatorName)
{
	Node* retVal = createDefaultNode("LessThan", 0);
	if (operatorName)
		sprintf(retVal->extraData, "%s", operatorName);
	return retVal;
}


Node* createGreaterNode(const char* operatorName)
{
	Node* retVal = createDefaultNode("Greater", 0);
	if (operatorName)
		sprintf(retVal->extraData, "%s", operatorName);
	return retVal;
}


Node* createLessOrEqualNode(const char* operatorName)
{
	Node* retVal = createDefaultNode("LessOrEqual", 0);
	if (operatorName)
		sprintf(retVal->extraData, "%s", operatorName);
	return retVal;
}


Node* createGreaterOrEqualNode(const char* operatorName)
{
	Node* retVal = createDefaultNode("GreaterOrEqual", 0);
	if (operatorName)
		sprintf(retVal->extraData, "%s", operatorName);
	return retVal;
}


Node* createAdditionNode(const char* operatorName)
{

	Node* retVal = createDefaultNode("AddOpAddition", 0);
	if (operatorName)
		sprintf(retVal->extraData, "%s", operatorName);
	return retVal;
}


Node* createSubtractionNode(const char* operatorName)
{
	Node* retVal = createDefaultNode("AddOpSubtraction", 0);
	if (operatorName)
		sprintf(retVal->extraData, "%s", operatorName);
	return retVal;
}



Node* createMultiplyNode(const char* operatorName)
{
	Node* retVal = createDefaultNode("Multiply", 0);
	if (operatorName)
		sprintf(retVal->extraData, "%s", operatorName);
	return retVal;
}


Node* createDivideNode(const char* operatorName)
{
	Node* retVal = createDefaultNode("Divide", 0);
	if (operatorName)
		sprintf(retVal->extraData, "%s", operatorName);
	return retVal;
}

Node* createIntFactorExprNode(Node* expr)
{
	Node* retNode = createDefaultNode("Int_factor_expr", 1);

	if (retNode)
	{
		retNode->links[0] = expr;
	}
	return retNode;
}

Node* createIntFactorArrayDimNode(Node* arrayDim)
{
	Node* retNode = createDefaultNode("Int_factor_array_dim", 1);

	if (retNode)
	{
		retNode->links[0] = arrayDim;
	}
	return retNode;
}

Node* createIntFactorFloatExprNode(Node* expr) 
{
	Node* retNode = createDefaultNode("Int_factor_float_expr", 1);

	if (retNode)
	{
		retNode->links[0] = expr;
	}
	return retNode;
}

Node* createIntFactorFloorExprNode(Node* expr)
{
	Node* retNode = createDefaultNode("Int_factor_Floor_expr", 1);

	if (retNode)
	{
		retNode->links[0] = expr;
	}
	return retNode;
}

Node* createIntFactorCeilExprNode(Node* expr)
{
	Node* retNode = createDefaultNode("Int_factor_Ceil_expr", 1);

	if (retNode)
	{
		retNode->links[0] = expr;
	}
	return retNode;		
}

Node* createIntFactorModifierListNode(Node* modifier_list)
{
	Node* retNode = createDefaultNode("Create_Modifier_list", 1);

	if (retNode)
	{
		retNode->links[0] = modifier_list;
	}
	return retNode;
}

Node* createIntFactorIvalNode(int value)
{
	Node* retVal = createDefaultNode("Ival", 0);
	
		sprintf(retVal->extraData, "%d", value);
	return retVal;
}

Node* createIntFactorRvalNode(const char* operatorName)
{
	Node* retVal = createDefaultNode("Rval", 0);
	if (operatorName)
		sprintf(retVal->extraData, "%s", operatorName);
	return retVal;
}

Node* createIntFactorBvalNode(const char* operatorName)
{
	Node* retVal = createDefaultNode("Bval", 0);
	if (operatorName)
		sprintf(retVal->extraData, "%s", operatorName);
	return retVal;
}

Node* createModifierListArgumentsNode(Node* arguments)
{
	Node* retNode = createDefaultNode("Modifier_List_Arguments", 1);

	if (retNode)
	{
		retNode->links[0] = arguments;
	}
	return retNode;
}


Node* createModifierListArrayDimNode(Node* array_dimensions)
{
	Node* retNode = createDefaultNode("Modifier_List_Array_Dim", 1);

	if (retNode)
	{
		retNode->links[0] = array_dimensions;
	}
	return retNode;
}


Node* createArgumentsNode(Node* expr, Node* more_arguments)
{
	Node* retNode = createDefaultNode("Create_More_Arguments", 2);

	if (retNode)
	{
		retNode->links[0] = expr;
		retNode->links[1] = more_arguments;
	}
	return retNode;
}

Node* createIfStatement(Node* expr, Node* thenStatement, Node* elseStatement)
{

	Node* retNode = createDefaultNode("createIfStatement", 3);
	retNode->links[0] = expr;
	retNode->links[1] = thenStatement;
	retNode->links[2] = elseStatement;
	/*if (expr)
		sprintf(retNode->extraData, "%s", expr);*/
	return retNode;
}


void printAst(Node* ast, int level)
{
	int idx = 0;
	if (ast)
	{
		for (idx = 0; idx < level; idx++)
		{
			printf(" ");
		}
		if (ast->type)
		{
			printf("%s ", ast->type);
		}
		if (ast->numLinks)
		{
			printf(" - %d - %s\n", ast->numLinks, ast->extraData);
		}
		else
		{
			printf(" - %s\n", ast->extraData);
		}
		for (idx = 0; idx < ast->numLinks; idx++)
		{

			printAst(ast->links[idx], level + 1);
		}
	}
}
