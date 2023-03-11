#include "binary_trees.h"

/**
 * binary_tree_node - functions that creates a binary tree node
 *
 * @parent: the parent of the node to be created
 * @value: is the value to put in the new node
 * Return: a pointer to the new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
	{
		free(node);
		return (node);
	}
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

