/**
 * @file binaryTree.h
 * @author Rachmat Purwa Saputra (rachmat.purwa.tif421@polban.ac.id), 211524054
 * @brief Spesifikasi (header) untuk ADT binary tree pada program kalkulator
 * @version 0.1
 * @date 2022-05-19
 * 
 */

#ifndef binaryTree_H
#define binaryTree_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "boolean.h"


#define nil NULL

typedef struct tNodeBinTree* address;
typedef struct tNodeBinTree {
    int info;                   // storing both the accepted operand and operator
    boolean isOperand;          // to differentiate between operand and operator
    int solvingPriority;        // attribute (for operand only) when interfere with many operator
    address left;               // as left-child node of parent node
    address right;              // as right-child node of parent node
} NodeBinTree;

/**
 * @brief Create a new node for binary tree, while assigning the info to the newly created node.
 * 
 * @param info For operand and operator
 * @param isOperand boolean atrribute to differentiate between operand and operator
 * @return address Memory address where this newly created node located
 */
address createNodeBinTree (int info, boolean isOperand);

/**
 * @brief Insert a new node after being allocated in memory heap to the binary tree whose parent is known.
 * 
 * @param root As root of the newly inserted node
 * @param info For operand and operator
 * @param isOperand boolean atrribute to differentiate between operand and operator
 * @return address Memory address where this newly created node located
 */
address insertNodeBinTree (address root, int info, boolean isOperand);

/**
 * @brief Show or print the tree to the console.
 * 
 * @param root As root of this tree.
 */
void printBinaryTree (address root);

#endif