#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node
 * Return: integer
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);

	return (check_perfect_tree(tree, 0, height);
}

/**
 * check_perfect_tree - checks if binary tree is perfect
 * @node: pointer to node
 * @level: binary tree level
 * @size: binary tree height
 * Return: Integer
 */

int check_perfect_tree(const binary_tree_t *node, size_t level, size_t height)
{
	if (node == NULL)
		return level == height;
	
	if (node->left == NULL || node->right == NULL)
		return (0);
	
	return (check_perfect_tree(node->left, level + 1, height) &&
			check_perfect_tree(node->right, level + 1, height);
}
