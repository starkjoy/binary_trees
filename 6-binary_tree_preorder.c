#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree in pre-order
 * @tree: pointer to root node
 * @func: pointer to a function which takes a value as a parameter
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
