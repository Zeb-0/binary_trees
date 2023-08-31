#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using inorder traversal
 * @tree: root node of tree in question
 * @func: pointer to a function to call for each node,
 *        teakes the value in the node as a parameter.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
