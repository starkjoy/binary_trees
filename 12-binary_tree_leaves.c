#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves of a binary tree
 * @tree: pointer to root node
 * Return: number of leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_count, left_leaves, right_leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	leaves_count = left_leaves + right_leaves;

	return (leaves_count);
}
