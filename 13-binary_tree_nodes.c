#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: pointer to root node
 * Return: count of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count, left_nodes, right_nodes;

	node_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		node_count += 1;

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	node_count = node_count + left_nodes + right_nodes;

	return (node_count);
}
