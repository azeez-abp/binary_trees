#include "binary_trees.h"


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
/*Allocate memory for the new node, checking for allocation failure*/
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        /*Return NULL on memory allocation failure*/
        return NULL;
    }
    /*Set the new node's value and pointers to children and parent*/
    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->parent = parent;

    /*Return a pointer to the newly created node*/
    return new_node;
}
