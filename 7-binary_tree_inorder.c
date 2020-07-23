#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using Inorder traversal
 * @tree : binary tree
 * @func : Pointer to a function to print data
 * Return: Void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_preorder(tree->left, func);
		func(tree->n);
		binary_tree_preorder(tree->right, func);
	}
}
