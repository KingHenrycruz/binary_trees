#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent: pointer to the node (left-child)
 * @value: value to store in the new node
 * Return: new node created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (!parent)
		return (NULL);

	new_left = malloc(sizeof(binary_tree_t));
	if (!new_left)
		return (NULL);

	new_left->n = value;
	new_left->parent = parent;
	new_left->left = NULL;
	new_left->right = NULL;

	if (!parent->left)
	{
		parent->left = new_left;
		return (new_left);
	}

	new_left->left = parent->left;
	parent->left->parent = new_left;
	parent->left = new_left;
	return (new_left);
}
