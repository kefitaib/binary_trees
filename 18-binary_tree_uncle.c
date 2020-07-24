#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node : node in a binary tree
 * Return: Pointer to the new node
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *gg;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	gg = node->parent->parent;

	if (gg->left && gg->right)
	{
		if (node->parent == gg->left)
			return (gg->right);

		return (gg->left);
	}

	return (NULL);
}
