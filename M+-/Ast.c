
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

//Node* createDeclarationsNode(Node* declaration)
//{
//	Node* retNode = createDefaultNode("Declarations", 1);
//	if (retNode)
//	{
//		retNode->links[0] = declaration;
//	}
//	return retNode;
//}

Node* createDeclarationNode(Node* varFunDeclaration)
{
	Node* retNode = createDefaultNode("Declaration", 1);
	if (retNode)
	{
		retNode->links[0] = varFunDeclaration;
	}
	return retNode;
}

Node* createVarDeclarationNode(Node* arrayDim, Node* type)
{
	Node* retNode = createDefaultNode("VarDeclaration", 2);

	if (retNode)
	{
		retNode->links[0] = arrayDim;
		retNode->links[1] = type;
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

Node* createParamListNode()
{
	return NULL;
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

Node* createMoreParametersNode()
{
	return NULL;
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




Node* createBasicArrayDimensionsNode()
{
	return NULL;
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

Node* createProgStmtNode()
{
	return NULL;
}

Node* createProgStmtsNode()
{
	return NULL;
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

//Node* Prog_stms_read_identifier(const char* identifier)
//{
//	Node* retVal = createDefaultNode("Read_Identifier", 0);
//	if (identifier)
//		/*sprintf(retVal->extraData, "%s", identifier);*/
//	strcpy(retVal->extraData, identifier);
//	return retVal;
//}


Node* Prog_stms_read_identifier( const char* identifier)
{

	Node* retNode = createDefaultNode("********", 0);

	if (retNode)
	{
		if (identifier)
			strcpy(retNode->extraData, identifier);
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





Node* createBintTermNode()
{
	return NULL;
}

Node* createBintFactorNode()
{
	return NULL;
}

Node* createEqualNode()
{
	return NULL;
}

Node* createLessThanNode()
{
	return NULL;
}

Node* createGreaterNode()
{
	return NULL;
}

Node* createLessOrEqualNode()
{
	return NULL;
}

Node* createGreaterOrEqualNode()
{
	return NULL;
}

Node* createIntExpressionNode()
{
	return NULL;
}

Node* createAdditionNode()
{
	return NULL;
}

Node* createSubtractionNode()
{
	return NULL;
}

Node* createIntTermNode()
{
	return NULL;
}

Node* createMultiplyNode()
{
	return NULL;
}

Node* createDivideNode()
{
	return NULL;
}

Node* createIntFactorNode()
{
	return NULL;
}

Node* createModifierListNode()
{
	return NULL;
}

Node* createArgumentsNode()
{
	return NULL;
}

Node* createMoreArgumentsNode()
{
	return NULL;
}
//
//Node* createVarDeclarationNode(char* var, const char* ID, Node* arrayDim, Node* type) {
//	Node* retNode = createDefaultNode("VarDeclaration", 2);
//
//	if (var)
//		sprintf(retNode->extraData, "%s", var);
//
//
//	if (retNode)
//	{
//		retNode->links[0] = arrayDim;
//		retNode->links[1] = type;
//		if (var)
//			sprintf(retNode->extraData, "%s", var);
//		sprintf(retNode->links[2]->extraData, "%s", ID);
//	}
//	return retNode;
//}


Node* createFunctionDeclarationNode(Node* typeSpecifier, const char* functionName, Node* paramsList, Node* compoundStatement)
{

	Node* retNode = createDefaultNode("FunctionDefinition", 3);

	if (retNode)
	{
		retNode->links[0] = typeSpecifier;
		retNode->links[1] = paramsList;
		retNode->links[2] = compoundStatement;
		if (functionName)
			strcpy(retNode->extraData, functionName);
	}

	return retNode;
}

Node* createVarDeclaration(int value, Node* type )
{
	Node* retNode = createDefaultNode("VariableDeclaration", 2);

	if (retNode)
	{
		retNode->links[0] = type;
		
	
		retNode->links[1] = createDefaultNode("IntValue", 0);
		sprintf(retNode->links[1]->extraData, "%d", value);
	}

	return retNode;

}

Node* createCompoundStatement(Node* localDeclList, Node* instructionsList)
{
	Node* retNode = createDefaultNode("CompoundStatement", 2);
	retNode->links[0] = localDeclList;
	retNode->links[1] = instructionsList;
	return retNode;
}

Node* createIfStatement(Node* expr, Node* thenStatement, Node* elseStatement)
{

	Node* retNode = createDefaultNode("createIfStatement", 3);
	retNode->links[0] = expr;
	retNode->links[1] = thenStatement;
	retNode->links[2] = elseStatement;
	if (expr)
		sprintf(retNode->extraData, "%s", expr);
	return retNode;
}

Node* createTypeSpecifier(const char* typeName)
{
	Node* retVal = createDefaultNode("TypeSpecifier", 0);
	if (typeName)
		sprintf(retVal->extraData, "%s", typeName);
	return retVal;
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
