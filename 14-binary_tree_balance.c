#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: pointer to root node
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_b = 0;
	size_t right_b = 0;

	if (tree == NULL)
		return (0);

	left_b = binary_tree_height(tree->left);
	right_b = binary_tree_height(tree->right);

	return (left_b - right_b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * Return: height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height += 1 + binary_tree_height(tree->left);
	right_height += 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
