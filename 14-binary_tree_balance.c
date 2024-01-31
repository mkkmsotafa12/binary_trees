#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: pointer to root of the tree
 * Return: balance factor, 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;

	if (tree)
	{
		balance_factor = binary_tree_height(tree->left) -
		binary_tree_height(tree->right);
		return (balance_factor);
	}
	return (0);
}


/**
 * binary__tree_height - function to calculate binary tree heights
 * @tree: pointer to root of the tree
 * Return: tree height
 */

int binary_tree_height(binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree)
	{
		left_height = 1 + binary_tree_height(tree->left);
		right_height = 1 + binary_tree_height(tree->right);
		if (left_height > right_height)
			return (left_height);
		else
			return (right_height);
	}
	return (0);
}