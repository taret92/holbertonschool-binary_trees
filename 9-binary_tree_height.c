#include "binary_trees.h"
/**
 * max - binary_tree_preorder
 * @a: variable
 * @b: variable
 * Return: a or b
 */
int max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}
/**
 * height -binary_tree_preorder
 * @tree: tree
 * Return: height
 */
size_t height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	return (max(height(tree->left), height(tree->right)) + 1);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: height or 0 in case error
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree));
}
