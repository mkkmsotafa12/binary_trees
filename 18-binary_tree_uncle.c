#include "binary_trees.h"

/**
 * binary_tree_uncle - A function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return: If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL, *c_parent = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	parent = node->parent;
	c_parent = node->parent->parent;
	if (c_parent->left == parent)
		return (c_parent->right);

	return (c_parent->left);

}
