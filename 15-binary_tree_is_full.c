#include "binary_trees.h"

/**
 * check - checks if a binary tree is full
 * @tree : binary tree
 * Return: true if it's full, false othewise
 */


bool check(const binary_tree_t *tree)
{
	if (!tree)
		return (true);

	if (!tree->left && !tree->right)
		return (true);

	if (tree->left && tree->right)
		return (check(tree->left) && check(tree->right));

	return (false);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree : binary tree
 * Return: Pointer to the new node
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (check(tree))
		return (1);

	return (0);
}
