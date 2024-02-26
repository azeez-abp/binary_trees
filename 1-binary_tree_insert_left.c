#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
    binary_tree_t *new_node;

    if (parent == NULL) {
        /*Return NULL if parent is NULL*/
        return NULL;
    }

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL) {
        /*Return NULL on memory allocation failure*/
        return NULL;
    }
    /*Handle existing left child (if any)*/
    if (parent->left != NULL) {
        /*Update old left child's parent*/
        parent->left->parent = new_node;
        /*Make existing left child the new node's left child*/
        new_node->left = parent->left;
    }

    /*Set the parent's left child to the new node*/
    parent->left = new_node;

    return new_node;
}
