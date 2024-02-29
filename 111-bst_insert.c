#include "binary_trees.h"





/**
 * binary_tree_node - Function for creating node for
 *	binary three
 * @parent: parent represent the pointer to root of the node
 * @value: represent the data in the node
 * Return: binary_tree_t the whole tree construct
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Allocate memory for the new node, checking for allocation failure*/
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		/*Return NULL on memory allocation failure*/
		return (NULL);
	}
	/*Set the new node's value and pointers to children and parent*/
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	/*Return a pointer to the newly created node*/
	return (new_node);
}







/**
 * bst_insert - insert nodes in order to create a BST tree
 * @tree: tree to create with type BST
 * @value: value of node to insert
 * Return: BST tree
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *temp;
	binary_tree_t *aux;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		aux = binary_tree_node((binary_tree_t *)(*tree), value);
		new = (bst_t *)aux;
		*tree = new;
	}
	else
	{
		temp = *tree;
		if (value < temp->n)
		{
			if (temp->left)
				new = bst_insert(&temp->left, value);
			else
			{
				aux = binary_tree_node((binary_tree_t *)temp, value);
				new = temp->left = (bst_t *)aux;
			}
		}
		else if (value > temp->n)
		{
			if (temp->right)
				new = bst_insert(&temp->right, value);
			else
			{
				aux = binary_tree_node((binary_tree_t *)temp, value);
				new = temp->right = aux;
			}
		}
		else
			return (NULL);
	}
	return (new);
}
