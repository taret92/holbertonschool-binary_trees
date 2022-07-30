#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: n_node or o in case of error
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_node = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		n_node += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
	return (n_node);
}
