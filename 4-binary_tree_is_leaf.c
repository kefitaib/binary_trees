#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @parent : pointer to the parent node of the node to create
 * @value : value to put in the new node
 * Return: Pointer to the new node
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);

	return (1);
}
