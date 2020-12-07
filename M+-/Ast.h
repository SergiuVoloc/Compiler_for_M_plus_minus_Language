#ifndef __AST_H
#define __AST_H

#define MAX_NODE_TYPE 50
#define MAX_EXTRA_DATA 50

typedef struct node {
	char type[MAX_NODE_TYPE];
	int numLinks;
	char extraData[MAX_EXTRA_DATA];
	struct node** links;
}Node;


Node* createProgNode(Node* block);
Node* createBlockNode(Node* declarations,Node* programBody);
//Node* createDeclarationsNode(Node* declaration);
Node* createDeclarationNode(Node* varFunDeclaration);
Node* createVarDeclarationNode(Node* arrayDim, Node* type );
Node* createType(const char* typeName);
Node* createFunDeclarationNode(Node* paramsList, Node* type, Node* funBlock);
Node* createFunBlockNode(Node* declarations, Node* funBody);
Node* createParametersNode(Node* basicDeclaration, Node* moreParameters);
Node* createBasicDeclarationNode(Node* BS_dimensions, Node* type);
Node* createProgramBodyNode(Node* programStatement);
Node* createFunBodyNode(Node* programStatement, Node* expr);
Node* createIfStatement(Node* expr, Node* thenStatement, Node* elseStatement);
Node* createWhileStatement(Node* expr, Node* doProg);
Node* Prog_stms_read_identifier(const char* identifier);
Node* createIdentifierNode(Node* array_dimensions);
Node* createBintTermNode();
Node* createBintFactorNode();
Node* createEqualNode();
Node* createLessThanNode();
Node* createGreaterNode();
Node* createLessOrEqualNode();
Node* createGreaterOrEqualNode();
Node* createIntExpressionNode();
Node* createAdditionNode();
Node* createSubtractionNode();
Node* createIntTermNode();
Node* createMultiplyNode();
Node* createDivideNode();
Node* createIntFactorNode();
Node* createModifierListNode();
Node* createArgumentsNode();
Node* createMoreArgumentsNode();
Node* createEmptyListNode(const char* listName);


Node* createTypeSpecifier(const char* typeName);
Node* createDeclarationNode(Node* varFunDeclaration);
Node* createFunctionDeclarationNode(Node* typeSpecifier, const char* functionName, Node* paramsList, Node* compoundStatement);
Node* createCompoundStatement(Node* localDeclList, Node* instructionsList);
Node* createIfStatement(const char* identifierName, Node* thenStatement, Node* elseStatement);

Node* createDefaultNode(const char* nodeName, unsigned int linksCount);
Node* resizeNodeLinks(Node* nodeToResize, unsigned int newSize);
Node* createListNode(const char* listName, Node* firstLink);
void addLinkToList(Node* listNode, Node* linkToAdd);
void printAst(Node* ast, int level);
#endif
