#include "binary_trees.h"

/**
 * heapify_up - Adjusts the Max Heap property upwards
 * @heap: A pointer to the root node of the heap
 * @node: A pointer to the inserted node
 *
 * Return: A pointer to the root node of the heap
 */
heap_t *heapify_up(heap_t **heap, heap_t *node)
{
	int temp;

	while (node->parent != NULL && node->n > node->parent->n)
	{
		temp = node->n;
		node->n = node->parent->n;
		node->parent->n = temp;
		node = node->parent;
	}
	if (node->parent == NULL)
		*heap = node;

	return (*heap);
}

/**
 * heap_insert - Inserts a value in a Max Binary Heap
 * @root: A double pointer to the root node of the Heap
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *new_node, *parent;

	if (root == NULL)
		return (NULL);

	new_node = binary_tree_node(NULL, value);
	if (new_node == NULL)
		return (NULL);
	if (*root == NULL)
	{
		*root = new_node;
		return (new_node);
	}
	parent = *root;
	while (parent->left != NULL && parent->right != NULL)
	{
		if (binary_tree_size(parent->left) <= binary_tree_size(parent->right))
			parent = parent->left;
		else
			parent = parent->right;
	}
	if (parent->left == NULL)
		parent->left = new_node;
	else
		parent->right = new_node;
	new_node->parent = parent;

	return (heapify_up(root, new_node));
}
