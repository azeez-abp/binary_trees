#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the sibling node, or NULL if no sibling or node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	/* Check if the node is the left child */
	if (node->parent->left == node)
	{
		/* Return the right child if it exists */
		if (node->parent->right != NULL)
			return (node->parent->right);
	}
	else
	{
		/* Otherwise, the node is the right child */
		/* Return the left child if it exists */
		if (node->parent->left != NULL)
			return (node->parent->left);
	}
	/* Return NULL if no sibling found */
	return (NULL);
}
