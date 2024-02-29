#include "binary_trees.h"

/**
 * swap_nodes - swaps values between two nodes
 * @a: first node
 * @b: second node
 */
void swap_nodes(heap_t *a, heap_t *b)
{
	int tmp = a->n;

	a->n = b->n;
	b->n = tmp;
}

/**
 * heap_insert - inserts a value in Max Binary Heap
 * @root: a double pointer to the root node of the Heap to insert the value
 * @value: the value to store in the node to be inserted
 *
 * Return: a pointer to the created node
 *         NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *tree, *new_node;

	if (!root)
		return (NULL);
	tree = *root;
	new_node = binary_tree_node(NULL, value);
	if (!new_node)
		return (NULL);
	if (!tree)
		return (*root = new_node);
	while (tree->left || tree->right)
	{
		if (!tree->left || !tree->right)
			break;
		if (binary_tree_size(tree->left) <= binary_tree_size(tree->right))
			tree = tree->left;
		else
			tree = tree->right;
	}
	if (!tree->left)
		tree->left = new_node;
	else
		tree->right = new_node;
	new_node->parent = tree;
	while (new_node->parent && new_node->n > new_node->parent->n)
	{
		swap_nodes(new_node, new_node->parent);
		new_node = new_node->parent;
	}
	return (new_node);
}
