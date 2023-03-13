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
 * binary_tree_keepbalance - makesure each node is balance
 * using in-order traversal
 *
 * @tree: the tree to be traversed
 * @count: start count
 * Return: 0(full) or any other number
 */

int binary_tree_keepbalance(const binary_tree_t *tree, int count)
{
	const binary_tree_t *buf = tree;

	if (tree)
	{
		if (tree->left)
			count = binary_tree_keepbalance(tree->left, count);
		if (tree->right)
			count = binary_tree_keepbalance(tree->right, count);
	}
	if (isleaf(buf))
		count++;
	else if (buf->left && buf->right)
		count++;
	return (count - 1);

}

/**
 * binary_tree_is_full - check if a tree is full
 *
 * @tree: tree whose leaves is/are to be counted
 * Return: return 0 FALSE or 1 TRUE
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int balance;

	if (!tree)
		return (0);
	balance = binary_tree_keepbalance(tree, 0);
	if (balance == 0)
		return (1);
	return (0);
}

