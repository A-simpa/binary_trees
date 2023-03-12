#include "binary_trees.h"

/**
 * binary_tree_size - count the number of node a binary tree has
 * using postorder traversal
 *
 * @tree: the tree to be traversed
 * Return: returns count
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int count = 0;

	return (_binary_tree_postcount(tree, count));
}


/**
 * _binary_tree_postcount - travers postorderly and count
 *
 * @tree: the tree to travers
 * @count: initial count
 * Return: return count
 */


int _binary_tree_postcount(const binary_tree_t *tree, int count)
{
	if (tree)
	{
		count = _binary_tree_postcount(tree->left, count);
		count = _binary_tree_postcount(tree->right, count);
		count++;
	}
	return (count);

}
