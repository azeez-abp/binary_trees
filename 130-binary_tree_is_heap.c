#include "binary_trees.h"

/**
 * binary_tree_size_heap - measures the size of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the size.
 *
 * Return: size of the tree or 0 if tree is NULL.
 */
size_t binary_tree_size_heap(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	/* Iteratively calculate the size of the tree */
	while (tree != NULL)
	{
		size++;
		size += binary_tree_size_heap(tree->left);
		tree = tree->right;
	}

	return (size);
}

/**
 * helper_heap - helps in checking if a binary tree is a valid max binary heap.
 * @tree: a pointer to the root node of tree to check.
 * @index: index of the node to check
 * @size: size of the binary heap
 *
 * Return: 1 if its a valid or 0 otherwise
 */
int helper_heap(const binary_tree_t *tree, size_t index, size_t size)
{
	if (tree == NULL)
		return (1);

	if (index >= size)
		return (0);

	if (tree->left && tree->left->n > tree->n)
		return (0);

	if (tree->right && tree->right->n > tree->n)
		return (0);

	return (helper_heap(tree->left, 2 * index + 1, size) &&
			helper_heap(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_is_heap - checks if a binary tree is a valid Max Binary Heap.
 * @tree: a pointer to the root node of tree to check.
 *
 * Return: 1 if tree is a valid Max Binary Heap
 *	   0 if tree is NULL or otherwise
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size_heap(tree);

	return (helper_heap(tree, 0, size));
}
