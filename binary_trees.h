#ifndef __BINARY__TREES__
#define __BINARY__TREES__
#define NOTUSED(x) (void)(x)
/*include headers*/
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

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


/*  linked list for advanced 101 the levelorder */
/**
 * struct link_s - structure for advanced tasks
 *
 * @n: depth of node specified
 * @node: node of tree to store
 * @next: next node of the linked list
 */
typedef struct link_s
{
	size_t n;
	struct binary_tree_s const *node;
	struct link_s *next;
} link_t;

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
/*function that measures the height of a binary tree for balance*/
size_t binary_tree_height_balance(const binary_tree_t *tree);
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
/*function to check if all nodes are smaller than the root specified*/
int check_sub_tree_Left(const binary_tree_t *node, int max);
/*function to check if all nodes are bigger than the root specified*/
int check_sub_tree_Right(const binary_tree_t *node, int min);
/*unction that checks if a binary tree is a valid Binary Search Tree*/
int binary_tree_is_bst(const binary_tree_t *tree);
typedef struct binary_tree_s bst_t;
/*function that inserts a value in a Binary Search Tree*/

bst_t *bst_insert(bst_t **tree, int value);
/*function that builds a Binary Search Tree from an array*/
bst_t *array_to_bst(int *array, size_t size);
/*function that searches for a value in a Binary Search Tree*/
bst_t *bst_search(const bst_t *tree, int value);
/*Deletes a node from a binary search tree*/
bst_t *bst_delete(bst_t *root, bst_t *node);
/*Removes a node from a binary search tree recursively*/
bst_t *bst_remove_recursive(bst_t *root, bst_t *node, int value);
/*function that removes a node from a Binary Search Tree*/
bst_t *bst_remove(bst_t *root, int value);
/*AVL Tree*/
typedef struct binary_tree_s avl_t;
/*function that checks if a binary tree is a valid AVL Tree*/
int binary_tree_is_avl(const binary_tree_t *tree);

/*is AVL*/
int binary_tree_is_avl(const binary_tree_t *tree);
/*AVL insert*/
avl_t *avl_insert(avl_t **tree, int value);
/*array to AVL*/
avl_t *array_to_avl(int *array, size_t size);
/*AVL removal*/
avl_t *avl_remove(avl_t *root, int value);
/*Sorted array to AVL tree*/
avl_t *sorted_array_to_avl(int *array, size_t size);

/*Max Binary Heap*/
typedef struct binary_tree_s heap_t;
int node_max_value(const binary_tree_t *tree);
size_t binary_tree_size_heap(const binary_tree_t *tree);
int helper_heap(const binary_tree_t *tree, size_t index, size_t size);
/*function that checks if a binary tree is a valid Max Binary Heap*/
int binary_tree_is_heap(const binary_tree_t *tree);
/*function that inserts a value in Max Binary Heap*/
heap_t *heap_insert(heap_t **root, int value);

#endif
