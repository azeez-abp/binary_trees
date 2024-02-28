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
/*function that measures the balance factor of a binary tree*/
int binary_tree_balance(const binary_tree_t *tree);
/*function that checks if a binary tree is full*/
int binary_tree_is_full(const binary_tree_t *tree);
/*function that checks if a binary tree is perfect*/
int binary_tree_is_perfect(const binary_tree_t *tree);
/*function that finds the sibling of a node*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/* function that finds the uncle of a node*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
/*Node ancestor*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, 
		const binary_tree_t *second);
/*Go through the tree horizontally*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/*Check a comlete tree all node has complete child*/
int binary_tree_is_complete(const binary_tree_t *tree);
/*rotate lef*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
/*rotate right*/
 binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

typedef struct binary_tree_s bst_t;
/*AVL Tree*/
typedef struct binary_tree_s avl_t;
/*Max Binary Heap*/
typedef struct binary_tree_s heap_t;

#endif
