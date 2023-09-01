#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a tree using pre-order traversal
 * @tree: root node of the tree to traverse
 * @func: function to call for each node
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *keep_l;
	binary_tree_t *keep_r;

	if (!tree || !func)
		return;

	func(tree->n);

	keep_l = tree->left;
	keep_r = tree->right;

	binary_tree_preorder(keep_l, func);
	binary_tree_preorder(keep_r, func);
}
