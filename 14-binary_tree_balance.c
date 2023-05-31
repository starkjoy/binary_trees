#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: pointer to root node
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor, left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	balance_factor = right_height - left_height;

	return (balance_factor);
}
