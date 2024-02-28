#include "binary_trees.h"


/**
 * countNode - function for counting total number of node
 * @tree: pointeer to the root
 * Return: number of node
 */

size_t count_node(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (1 + count_node(tree->left) + count_node(tree->right));
}


/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t total_nodes;
	size_t h;

	total_nodes =(int) count_node(tree);
	h = (int) (1 << binary_tree_height(tree)) - 1;

	if (total_nodes == h)
		return (1);
	else
		return (0);


	exit(0);

	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* If the tree is not balanced, it's not perfect */
	if (left_height != right_height)
		return (0);
	/* Check if left and right subtrees are perfect */
	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);

	/* If it's a leaf node, it's perfect */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
