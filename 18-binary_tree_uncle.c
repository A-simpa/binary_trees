#include "binary_trees.h"

/**
 * binary_tree_uncle - returns a node uncle
 *
 * @node: the node whose uncle is to be gotten
 * Return: a pointer to a node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
