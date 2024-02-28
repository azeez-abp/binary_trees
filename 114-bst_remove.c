#include "binary_trees.h"

/**
 * bst_remove - Removes a node from a Binary Search Tree
 * @root: Pointer to the root node of the tree
 * @value: Value to be removed from the tree
 *
 * Return: Pointer to the new root node of the tree after removal
 */

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp;

	if (root == NULL)
		/*Handle empty tree*/
		return (NULL);

	/*Recursively search for the node to remove*/
	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
		if (root->left == NULL)
		{
			temp = root->right;
			free(root);
			return (temp);
		}
		else if (root->right == NULL)
		{
			temp = root->left;
			free(root);
			return (temp);
		}
		/*Find in-order successor (smallest in right subtree)*/
		temp = root->right;
		while (temp->left != NULL)
			temp = temp->left;
		/*Swap data with successor (efficiently avoid copying)*/
		root->n = temp->n;
		/*Recursively remove the successor (it has at most one child)*/
		root->right = bst_remove(root->right, temp->n);

		return (root);
}
