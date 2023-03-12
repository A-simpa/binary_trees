#include "binary_trees.h"

/**
 * binary_tree_postorder - pass each node of a binary tree to func
 * using postorder traversal
 *
 * @tree: the tree to be traversed
 * @func: the function used to print
 * Return: returns void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
