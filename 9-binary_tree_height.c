#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * Return: height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t binary_height, left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		binary_height = left_height + 1;
	else
		binary_height = right_height + 1;

	return (binary_height);
}
