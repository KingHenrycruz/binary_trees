#include "binary_trees.h"

/**
 * binary_tree_postorder - A function that goes through a tree
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *keep_l;
	binary_tree_t *keep_r;

	if (!tree || !func)
		return;

	keep_l = tree->left;
	keep_r = tree->right;

	binary_tree_postorder(keep_l, func);
	binary_tree_postorder(keep_r, func);
	func(tree->n);
}
