#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree : binary tree
 * Return: Pointer to the new node
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || !tree->left || !tree->right)
		return (0);

	return (1);
}
