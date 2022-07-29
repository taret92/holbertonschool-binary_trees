#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree 
 * @parent: A pointer to the parent 
 * @value: The value to put in the new node.
 *
 * Return: If an error is present - NULL.
 *         else - a pointer to the a new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		fprintf(stderr, "Error\n");
		return (NULL);
	}
	if (!value)
	{
		free(new_node);
		fprintf(stderr, "Error");
		return (NULL);
	}
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent == NULL)
	{
		new_node->parent = NULL;
		return (new_node);
	}

	new_node->parent = parent;

	return (new_node);
}
