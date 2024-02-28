#include "binary_trees.h"


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
			l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((l > r) ? l : r);
	}
}


/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
<<<<<<< HEAD
	int diff, left_height, right_height = 0;
=======
	int left_height, right_height, diff = 0;
>>>>>>> 7a59e02bde4e62bc2a3990ac030b561a933abbe4

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
<<<<<<< HEAD
		diff = left_height - right_height;
=======
		diff  = left_height - right_height;
>>>>>>> 7a59e02bde4e62bc2a3990ac030b561a933abbe4
	}
	/*subtracting the right height from the left height*/
	return (diff);
}
