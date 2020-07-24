#include "binary_trees.h"


/**
 * depth - depth of a binary tree
 * @tree : height of a binary tree
 * Return: depth of the tree
 */

int depth(const binary_tree_t *tree)
{
	int x = 0;
	binary_tree_t *t = (binary_tree_t *)tree;

	if (!t)
		return (x);

	while (t)
	{
		x++;
		t = t->left;
	}
	return (x);
}

/**
 * check - check if tree s perfect
 * @tree : tree to check
 * @d : depth of the tree
 * @lvl : level of depth
 * Return: true if perfert, flase if not
 */

bool check(const binary_tree_t *tree, int d, int lvl)
{
	if (!tree)
		return (true);

	if (!tree->left && !tree->right)
		return (d == lvl + 1);

	if (!tree->left || !tree->right)
		return (false);

	return (check(tree->left, d, lvl + 1) && check(tree->right, d, lvl + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree : binary tree
 * Return: Pointer to the new node
 */


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (check(tree, depth(tree), 0))
		return (1);

	return (0);
}
