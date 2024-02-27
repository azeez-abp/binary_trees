#include "binary_trees.h"


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
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
