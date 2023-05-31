#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of binary tree
 * @tree: pointer to root node
 * Return: Size of binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size, left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);
	tree_size = left_height + right_height + 1;

	return (tree_size);
}
