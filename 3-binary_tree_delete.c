#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree) {
    if (tree == NULL) {
        /*Do nothing if tree is NULL*/
        return;
    }

    /*recursive calls to delete left and right subtrees*/
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    /*Free the memory of the current node*/
    free(tree);
}