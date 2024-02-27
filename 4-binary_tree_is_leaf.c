#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function for checking if the node is leaf
 * @node: the pointer to the node to check
 * Return: 1 is leave else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}

	return (0);
}
