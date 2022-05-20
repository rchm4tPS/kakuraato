
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "stdCalculator.c"
#include "binaryTree.c"

int main() {
    char expression[60];
    address tree;

    printf(" \n\t Masukkan ekspresi matematika disini : ");
    scanf(" %30[^\n]%*c", expression);

    // tree = parseExpressionToBinTree(expression);
    // // printBinaryTree(tree);

    return 0;
}