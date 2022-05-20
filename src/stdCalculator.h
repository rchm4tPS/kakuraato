#ifndef stdCalculator_H
#define stdCalculator_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "boolean.h"
#include "binaryTree.h"


/**
 * @brief Parse the expression inputted by user, differentiate the operand and operator.
 * 
 * @param expression Expression as String from user
 * @return address - Address of root node of new binary tree after expression is parsed
 */
address parseExpressionToBinTree (char* expression);

/**
 * @brief Get the boolean value, whether the character is operand or not.
 * 
 * @param op The character
 * @return boolean 
 */
boolean isOperand(char op);

#endif
