#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a tree is a leaf
 *
 * @node: pointer to the node to check
 * Return: 1 for TRUE 0 for FALSE
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (!(node->left == NULL && node->right == NULL))
		return (0);
	return (1);
}
