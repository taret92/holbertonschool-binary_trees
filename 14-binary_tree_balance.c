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
 * height_tree -binary_tree_preorder
 * @tree: tree
 * tree_left: counter left
 * tree_right: counter right
 * Return: height
 */
size_t height_tree(const binary_tree_t *tree)
{
	size_t tree_left = 0;
	size_t tree_right = 0;

	if (tree == NULL)
		return (0);
	tree_left = height_tree(tree->left);
	tree_right = height_tree(tree->right);

	return (max(tree_left, tree_right) + 1);
}
/**
 * height_tree2 - funtion return max heigt
 * @tree: pointer
 * Return: height_tree
 */
size_t height_tree2(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height_tree(tree));
}

/**
 * binary_tree_balance - return measures the balance factor of a binary tree
 * @tree: pointer
 * count: value subtract left and right
 * Return: count
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int count = 0;

	if (!tree)
		return (0);

	count = height_tree(tree->left) - height_tree(tree->right);

	return (count);
}
