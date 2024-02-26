#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value){
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
    /*Handle existing right child (if any)*/
    if (parent->right != NULL) {
        /*Update old right child's parent*/
        parent->right->parent = new_node;
        /*Make existing right child the new node's left child*/
        new_node->right = parent->right;
    }

    /*Set the parent's right child to the new node*/
    parent->right = new_node;

    return new_node;
}