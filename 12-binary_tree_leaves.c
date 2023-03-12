#include "binary_trees.h"
/**
 * isleaf - checks if a tree is a leaf
 *
 * @node: pointer to the node to check
 * Return: 1 for TRUE 0 for FALSE
 */

int isleaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (!(node->left == NULL && node->right == NULL))
		return (0);
	return (1);
}


/**
 * binary_tree_leafcount - pass each node of a binary tree to func
 * using in-order traversal
 *
 * @tree: the tree to be traversed
 * @count: start count
 * Return: returns count of parent
 */

int binary_tree_leafcount(const binary_tree_t *tree, int count)
{
	const binary_tree_t *buf = tree;

	if (tree)
	{
		if (tree->left)
			count = binary_tree_leafcount(tree->left, count);
		if (tree->right)
			count = binary_tree_leafcount(tree->right, count);
	}
	if (isleaf(buf))
		count++;
	return (count);

}

/**
 * binary_tree_leaves - calculate the tree height
 *
 * @tree: tree whose leaves is/are to be counted
 * Return: return the heigth(int)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_leafcount(tree, 0));
}

