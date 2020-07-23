#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node : pointer to the node to check
 * Return: 1 if it's a leaf, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}
