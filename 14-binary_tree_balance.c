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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree : binary tree
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (0);

	lh = findh(tree->left);
	rh = findh(tree->right);

	return (lh - rh);
}
