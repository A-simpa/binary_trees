#include "binary_trees.h"

/**
 * binary_tree_preorder - print each node of a binary tree
 * using pre-order traversal
 *
 * @tree: the tree to be traversed
 * @func: the function used to print
 * Return: returns void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
