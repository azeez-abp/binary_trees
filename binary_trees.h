#ifndef __BINARY__TREES__
#define __BINARY__TREES__
#define NOTUSED(x) (void)(x)
/*include headers*/
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

/*visually represent trees*/
void binary_tree_print(const binary_tree_t *);
/*create new node*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/*inserts a node as the left-child of another node*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/*inserts a node as the right-child of another node*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/*function that deletes an entire binary tree*/
void binary_tree_delete(binary_tree_t *tree);
/*function that checks if a node is a leaf*/
int binary_tree_is_leaf(const binary_tree_t *node);
/*function that checks if a given node is a root*/
int binary_tree_is_root(const binary_tree_t *node);
/*function that goes through a binary tree using pre-order traversal*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/*function that goes through a binary tree using in-order traversal*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* function that goes through a binary tree using post-order traversal*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/*function that measures the height of a binary tree*/
size_t binary_tree_height(const binary_tree_t *tree);
/*function that measures the depth of a node in a binary tree*/
size_t binary_tree_depth(const binary_tree_t *tree);
/* function for computation of tree size*/
size_t binary_tree_size(const binary_tree_t *tree);
/* binary_tree_leaves*/
size_t binary_tree_leaves(const binary_tree_t *tree);
/*binary_tree_nodes*/
size_t binary_tree_nodes(const binary_tree_t *tree);

/*Binary Search Tree*/
typedef struct binary_tree_s bst_t;
/*AVL Tree*/
typedef struct binary_tree_s avl_t;
/*Max Binary Heap*/
typedef struct binary_tree_s heap_t;

#endif
