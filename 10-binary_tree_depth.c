#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a binary tree node
 * @tree: pointer to root node
 * Return: depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth += 1;
		tree = tree->parent;
	}

	return (depth);
}
