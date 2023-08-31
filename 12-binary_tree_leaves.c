#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: points to the root node of the tree to count
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t no_leaves = 0;

	if (tree)
	{
		no_leaves += (!tree->left && !tree->right) ? 1 : 0;
		no_leaves += binary_tree_leaves(tree->left);
		no_leaves += binary_tree_leaves(tree->right);
	}

	return (no_leaves);
}
