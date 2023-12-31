#include "binary_trees.h"

/**
 * count_tree_left - counts number of levels in the tree
 * @tree: pointer to the node
 *
 * Return: no. of levels
 */
size_t count_tree_left(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	return (1 + count_tree_left(tree->left));
}

/**
 * count_tree_right - counts number of levels in the tree
 * @tree: pointer to node
 *
 * Return: levels
 */
size_t count_tree_right(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	return (1 + count_tree_right(tree->right));
}


/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: pointer to root node of tree to measure the height
 *
 * Return: if tree is null return 0, else return the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t number_one;
	size_t number_two;

	if (!tree)
		return (0);

	number_two = count_tree_right(tree);
	number_one = count_tree_left(tree);

	if (number_one > number_two)
		return (number_one);

	return (number_two);
}
