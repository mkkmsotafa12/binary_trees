#include "binary_trees.h"

/**
 * tree_is_perfect - A function that checks if a binary tree is perfect
 * @tree: tree to check
 * Return: 0 if is not a perfect or other number that is the level of height
 */

int tree_is_perfect(const binary_tree_t *tree)
{
	int j = 0, i = 0;

	if (tree->left && tree->right)
	{
		j = 1 + tree_is_perfect(tree->left);
		i = 1 + tree_is_perfect(tree->right);
		if (i == j && i != 0 && j != 0)
			return (j);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - A function that checks if a binary tree is perfect
 * @tree: tree to check
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tmp = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		tmp = tree_is_perfect(tree);
		if (tmp != 0)
		{
			return (1);
		}
		return (0);
	}
}