#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the new node, or NULL if  failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_child = NULL;

	if (parent == NULL)
		return (NULL);

	new_left_child = malloc(sizeof(binary_tree_t));
	if (!new_left_child)
		return (NULL);

	new_left_child->n = value;
	new_left_child->parent = parent;
	new_left_child->left = NULL;
	new_left_child->right = NULL;

	if (parent->left == NULL)
		parent->left = new_left_child;
	else
	{
		new_left_child->left = parent->left;
		parent->left->parent = new_left_child;
		parent->left = new_left_child;
	}

	return (new_left_child);
}
