#include "binary_trees.h"

/**
 * binary_tree_insert_left - it inserts a node as the left child of another
 *
 * @parent: the parent node to insert the left-child in
 * @value: the value to insert in the left node
 * Return: return node or NULL
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	if (!(parent->left))
		node->left = NULL;
	else
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	parent->left = node;

	return (node);
}
