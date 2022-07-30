#include "binary_trees.h"

/**
 * binary_tree_size2 - size of binary tree
 * size: variable
 * @tree: node
 * Return: size
 */
size_t binary_tree_size2(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size2(tree->left);
		size += binary_tree_size2(tree->right);
	}
	return (size);
}
/**
 * binary_tree_is_perfect - binary_tree_is_perfect
 *
 * @tree: pointer to nodo
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_size2(tree->left) == binary_tree_size2(tree->right))
		return (1);

	return (0);
}
