#include "binary_trees.h"

/**
 * binary_tree_depth - depth of a binary tree
 * @tree : height of a binary tree
 * Return: depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t x = 0;

	if (!tree)
		return (x);

	while (tree->parent)
	{
		x++;
		tree = tree->parent;
	}
	return (x);
}
