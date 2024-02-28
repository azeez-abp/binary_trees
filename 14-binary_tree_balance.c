#include "binary_trees.h"
/**
 * binary_tree_height_balance - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of binary tree or 0 if tree is NULL
 */
size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_balance(tree->left);
	right_height = binary_tree_height_balance(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}


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
		left_height = ((int)binary_tree_height_balance(tree->left));
		right_height = ((int)binary_tree_height_balance(tree->right));
		diff = left_height - right_height;
	}
	/*subtracting the right height from the left height*/
	return (diff);
}
