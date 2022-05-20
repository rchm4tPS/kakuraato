

#include "stdCalculator.h"


address parseExpressionToBinTree (char* expression)
{
    address binTree = nil;
    int exprLength = 0;

    int idxArr = 0;
    double tempNumber = 0;
    char operandArr[30];

    // get the length of the expression array
    exprLength = strlen(expression);

    for (int i = exprLength - 1; i >= 0; i--) {
        if (expression[i] == ' ') {
            continue;  // because of the space contained there
        }

        if(isOperand(expression[i]) || expression[i] == '.') {
            idxArr = 0;
            do {
                operandArr[idxArr] = expression[i];
                idxArr++;
                i--;
            } while ((i >= 0 && isOperand(expression[i])) || expression[i] == '.');
            operandArr[idxArr] = '\0';  

            tempNumber = strtod(strrev(operandArr), nil);  // strtod stands for string to double.
            binTree = insertNodeBinTree(binTree, tempNumber, true);
        }
        else {
            binTree = insertNodeBinTree(binTree, expression[i], false);
        }
    }

    for (int j = 0; j < strlen(operandArr); j++) {
        printf(" %c", operandArr[j++]);
    }

    printBinaryTree(binTree);

    return binTree;
}

boolean isOperand(char op)
{
    if (op >= 48 && op <= 57) return true;
    else return false;
}

