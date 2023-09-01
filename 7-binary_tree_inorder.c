#include "binary_trees.h"

/**
 * binary_tree_inorder - go through a tree using in-order traversal
 * @tree: root node of the tree to traverse
 * @func: function to call for each node
 * Return: Null
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *keep_r;
	binary_tree_t *keep_l;

	if (!tree || !func)
		return;

	keep_l = tree->left;
	binary_tree_inorder(keep_l, func);
	func(tree->n);

	keep_r = tree->right;
	binary_tree_inorder(keep_r, func);
}
