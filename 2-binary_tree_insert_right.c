#include "binary_trees.h"

/**
 * binary_tree_insert_right - it inserts a node as the left child of another
 *
 * @parent: the parent node to insert the right-child in
 * @value: the value to insert in the left node
 * Return: return node or NULL
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL || parent == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	if (!(parent->right))
		node->right = NULL;
	else
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;

	return (node);
}
