#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the distance from the root
 *
 * @tree: pointer to the node to calculate its depth
 * Return: count in size
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *buf = tree;
	int level = 0;

	if (!tree)
		return (0);
	while (buf->parent)
	{
		buf = buf->parent;
		level++;
	}
	return (level);
}
