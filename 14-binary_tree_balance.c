#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int diff, left_height, right_height = 0;

	if (tree == NULL)
	{
		/*Balance factor of a NULL tree is 0*/
		return (0);
	}
	/*Get the heights of the left and right subtrees*/
	if (tree)
	{
		left_height = ((int)binary_tree_height(tree->left));
		right_height = ((int)binary_tree_height(tree->right));
		diff = left_height - right_height;
	}
	/*subtracting the right height from the left height*/
	return (diff);
}
