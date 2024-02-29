#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: A pointer to the root node of the binary tree.
 * @index: The current index of the node being checked.
 * @node_count: The number of nodes in the binary tree.
 *
 * Return: 1 if the binary tree is complete, 0 otherwise.
 */
int bt_is_complete(const binary_tree_t *tree, size_t index,
		size_t node_count)
{
	if (tree == NULL)
		return (1);
	if (index >= node_count)
		return (0);

	return (bt_is_complete(tree->left, 2 * index + 1, node_count) &&
			bt_is_complete(tree->right, 2 * index + 2, node_count));
}

/**
 * binary_tree_is_heap_util - Checks if a binary tree
 * is a valid Max Binary Heap.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: 1 if the binary tree is a valid Max Binary Heap, 0 otherwise.
 */
int binary_tree_is_heap_util(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree->left && tree->left->n > tree->n)
		return (0);
	if (tree->right && tree->right->n > tree->n)
		return (0);

	return (binary_tree_is_heap_util(tree->left) &&
			binary_tree_is_heap_util(tree->right));
}

/**
 * binary_tree_is_heap - Checks if a binary tree is a valid Max Binary Heap.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: 1 if the binary tree is a valid Max Binary Heap, 0 otherwise.
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree == NULL)
		return (0);
	node_count = binary_tree_size(tree);
	if (bt_is_complete(tree, 0, node_count) &&
			binary_tree_is_heap_util(tree))
		return (1);
	return (0);
}
