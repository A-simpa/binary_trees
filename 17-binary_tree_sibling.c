#include "binary_trees.h"

/**
 * binary_tree_sibling - returns a node sibling
 *
 * @node: the node whose siblings is to be gotten
 * Return: a pointer to a node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node && node->parent->right)
		return (node->parent->right);
	if (node->parent->left)
		return (node->parent->left);
	return (NULL);
}
