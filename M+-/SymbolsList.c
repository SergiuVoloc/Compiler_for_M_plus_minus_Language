#include "SymbolsList.h"
#include <stdio.h>
#include <memory.h>
#define ALLOCATION_BATCH_SIZE 10


SymbolsList* createSymbolsList(int initialDimension)
{
	SymbolsList* retList = (SymbolsList*)malloc(sizeof(SymbolsList));
	if (retList)
	{
		memset(retList, 0, sizeof(SymbolsList));
		if (initialDimension > 0)
		{
			retList->elements = (SymTableEntry*)malloc(sizeof(SymTableEntry) * initialDimension);
			if (retList->elements)
			{
				retList->size = initialDimension;
			}
			else
			{
				free(retList);
				retList = NULL;
			}
		}
	}
	return retList;
}

int addToSymbolsList(SymbolsList* listHandle, SymTableEntry element)
{
	int retVal = 0;
	if (listHandle)
	{
		if (listHandle->actualCount >= listHandle->size)
		{
			SymTableEntry* newLocation = (SymTableEntry*)realloc(listHandle->elements, sizeof(SymTableEntry) * (listHandle->actualCount + ALLOCATION_BATCH_SIZE));
			if (newLocation)
			{
				listHandle->elements = newLocation;
				listHandle->size = listHandle->actualCount + ALLOCATION_BATCH_SIZE;
				//retVal = 1;
			}

		}
		if (listHandle->actualCount < listHandle->size)
		{
			memcpy(&listHandle->elements[listHandle->actualCount], &element, sizeof(SymTableEntry));
			listHandle->actualCount++;
			retVal = 1;
		}

	}
	return retVal;

}

void printListEntry(SymTableEntry* entry)
{
	printf("************************************\n");
	printf("Symbol Name:\t %s\n", entry->symbolName);
	printf("DataType:\t %s\n", entry->dataType);
	printf("Context:\t %s\n", entry->contextName);
	printf("Symbol Type: %d\n", entry->symbolType);
	printf("Symbol Scope: %d\n", entry->symbolScope);
	
}


	/* check if a variable is declared more than one time in the same context */
int DeclarationNumber(const char* symbolName, const char* context, int symbolType)
{
	int isDoubleDecl = 0;

	for (int i = 0; i < lengthList; i++)
	{
		if (!strcmp(symTableEntryList[i].contextName, context))
		{
			if (!strcmp(symTableEntryList[i].symbolName, symbolName))
			{
				if (symTableEntryList[i].symbolType == 1 && symbolType == 1)
				{
					isDoubleDecl = 1;
				}
			}
		}
	}
	if (isDoubleDecl)
	{
		return 1;
	}
	return 0;
}


	// assignment between two variables with compatible data types 

	// variables used are declared before usage


void printSymbolsList(SymbolsList* listHandle)
{
	if (listHandle)
	{
		if (listHandle->actualCount == 0)
		{
			printf("The list is empty\n");
		}
		else
		{
			for (unsigned int i = 0; i < listHandle->actualCount; i++)
			{
				printListEntry(&listHandle->elements[i]);
			}
		}
	}
	else
	{
		printf("The list is invalid. NULL pointer provided\n");
	}
}