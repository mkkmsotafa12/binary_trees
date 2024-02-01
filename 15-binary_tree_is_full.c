#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root of the tree
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return
			binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right);
	if (tree->left || tree->right)
		return (0);

	return (1);
}