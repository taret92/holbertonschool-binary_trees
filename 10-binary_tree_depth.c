#include "binary_trees.h"
/**
 * depth - binary_tree_preorder
 * @tree: tree pointer
 * Return: count depth
 */
size_t depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	return (depth(tree->parent) + 1);
}
/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the depth
 * Return: depth or 0 in case error
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (depth(tree));
}
