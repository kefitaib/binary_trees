#include "binary_trees.h"

/**
 * findh - find the height of a binary tree
 * @tree : height of a binary tree
 * Return: height of the tree
 */

int findh(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (-1);

	lh = findh(tree->left);
	rh = findh(tree->right);
	return ((lh > rh ? lh : rh) + 1);
}


/**
 * binary_tree_height - height of a binary tree
 * @tree : height of a binary tree
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (findh(tree));
}
