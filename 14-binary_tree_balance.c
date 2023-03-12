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
 * binary_tree_incount - pass each node of a binary tree to func
 * using in-order traversal
 *
 * @tree: the tree to be traversed
 * @start: start count
 * @level: level which a node is at
 * Return: returns count of parent
 */

int binary_tree_incount(const binary_tree_t *tree, int start, int level)
{
	int count = 0;
	const binary_tree_t *buf = tree;

	if (tree)
	{
		if (tree->left)
			start = binary_tree_incount(tree->left, start, level);
		if (tree->right)
			start = binary_tree_incount(tree->right, start, level);
	}
	if (isleaf(buf))
	{
		while (buf->parent)
			buf = buf->parent, count++;
	}
	if (count - level > start)
		start = count -  level;
	return (start);

}

/**
 * binary_tree_balance - calculate balance factor of tree
 *
 * @tree: tree whose height is to be calculated
 * Return: return the heigth(int)
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_count = 0, right_count = 0;

	if (!tree)
		return (0);
	left_count = binary_tree_incount(tree->left, 0, 1);
	right_count = binary_tree_incount(tree->right, 0, 1);
	return (left_count - right_count);
}

