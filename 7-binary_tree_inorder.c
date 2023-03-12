#include "binary_trees.h"

/**
 * binary_tree_inorder - pass each node of a binary tree to func
 * using in-order traversal
 *
 * @tree: the tree to be traversed
 * @func: the function used to print
 * Return: returns void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
