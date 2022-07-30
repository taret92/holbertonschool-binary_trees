#include "binary_trees.h"
/**
 * binary_tree_inorder -binary_tree_preorder
 *
 * @tree: tree
 * @func: func
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	if (func)
	{
		func(tree->n);
	}
	else
	{
		return;
	}
	binary_tree_inorder(tree->right, func);
}
