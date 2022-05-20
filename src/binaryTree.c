

#include "binaryTree.h"


address createNodeBinTree (int info, boolean isOperand)
{
    address newNode = (address)malloc(sizeof(NodeBinTree));

    if (newNode != nil) {
        newNode->info = info;
        newNode->isOperand = isOperand;
        newNode->left = newNode->right = nil;
        newNode->solvingPriority = -1;
    }

    return newNode;
}

address insertNodeBinTree (address root, int info, boolean isOperand)
{
    address newNode;

    // jika tree belum memiliki satu node pun
    if (root == nil) {
        return createNodeBinTree(info, isOperand);
    }

    // jika root sudah memiliki anak kiri, namun anak kanan kosong
    // atau root sub-tree kanan bukan operand
    if (root->right == nil || root->right->isOperand == false) {
        newNode = insertNodeBinTree(root->right, info, isOperand);
        if (newNode != nil) {
            root->right = newNode;
            return root;
        }
    }

    // jika root sudah memiliki anak kanan, namun anak kiri yang kosong
    if (root->info != '-' && root->info != '#' && 
        (root->left == nil || root->left->isOperand == false)) {
        newNode = insertNodeBinTree(root->left, info, isOperand);
        if (newNode != nil) {
            root->left = newNode;
            return root;
        }
    }

    return nil;
}

void printBinaryTree (address root)
{
    // menggunakan skema post-order
    printBinaryTree(root->left);
    printBinaryTree(root->right);
    printf(" %c", root->info);
}

