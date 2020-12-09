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
Node* createDeclarationNode(Node* varFunDeclaration);
Node* createVarDeclarationNode(const char* ID,Node* arrayDim, Node* type );
Node* createType(const char* typeName);
Node* createFunDeclarationNode(Node* paramsList, Node* type, Node* funBlock);
Node* createFunBlockNode(Node* declarations, Node* funBody);
Node* createParametersNode(Node* basicDeclaration, Node* moreParameters);
Node* createBasicDeclarationNode(Node* BS_dimensions, Node* type);
Node* createProgramBodyNode(Node* programStatement);
Node* createFunBodyNode(Node* programStatement, Node* expr);
Node* createIfStatement(Node* expr, Node* thenStatement, Node* elseStatement);
Node* createWhileStatement(Node* expr, Node* doProg);
Node* Prog_stms_read_identifier(Node*  identifier); 
Node* createIdentifierNode(Node* array_dimensions);
Node* createBintFactorNode(Node* firstIntExpr, Node* compareOperand, Node* secondIntExpr);
Node* createEqualNode(const char* operatorName);
Node* createLessThanNode(const char* operatorName);
Node* createGreaterNode(const char* operatorName);
Node* createLessOrEqualNode(const char* operatorName);
Node* createGreaterOrEqualNode(const char* operatorName);
Node* createAdditionNode(const char* operatorName);
Node* createSubtractionNode(const char* operatorName);
Node* createMultiplyNode(const char* operatorName);
Node* createDivideNode(const char* operatorName);
Node* createIntFactorExprNode(Node* expr);
Node* createIntFactorArrayDimNode(Node* arrayDim);
Node* createIntFactorFloatExprNode(Node* expr);
Node* createIntFactorFloorExprNode(Node* expr);
Node* createIntFactorCeilExprNode(Node* expr);
Node* createIntFactorModifierListNode(Node* modifier_list);
Node* createIntFactorIvalNode(int value);
//Node* createIntFactorRvalNode(const char* operatorName);
//Node* createIntFactorBvalNode(const char* operatorName);
Node* createModifierListArgumentsNode(Node* arguments);
Node* createModifierListArrayDimNode(Node* array_dimensions);
Node* createArgumentsNode(Node* expr, Node* more_arguments);
Node* createEmptyListNode(const char* listName);
Node* createProgStmt_assign_expr(Node* identifier, Node* expr);
Node* createProgStmt_print_expr(Node* expr);
Node* createProgStmt_block(Node* expr);
Node* createSubstractOperation(Node* intFactor);

Node* createDefaultNode(const char* nodeName, unsigned int linksCount);
Node* resizeNodeLinks(Node* nodeToResize, unsigned int newSize);
Node* createListNode(const char* listName, Node* firstLink);
void addLinkToList(Node* listNode, Node* linkToAdd);
void printAst(Node* ast, int level);
#endif

