#include "binary_trees.h"

/**
 * node_max_value - go through a binary tree cheking ropt as max value
 * @tree: pointer to the root
 * Return: 1 if all nodes are max, 0 in other cases
 **/
int node_max_value(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree->left && tree->left->n > tree->n)
		return (0);
	if (tree->right && tree->right->n > tree->n)
		return (0);

	return (node_max_value(tree->left) &&
			node_max_value(tree->right));
}
/**
 * binary_tree_is_heap - checks if a binary tree is heap
 * @tree: pointer to the node
 * Return: 1 in case BTS /  0 otherwise
 **/
int binary_tree_is_heap(const binary_tree_t *tree)
{
	int tmp;

	if (!tree)
		return (0);

	tmp = binary_tree_is_complete(tree);
	if (!tmp)
		return (0);

	return (node_max_value(tree));
}
