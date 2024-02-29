#include "binary_trees.h"

/**
 * binary_tree_is_leaf - this is the function that return a boolean value
 * @node: the binary tree
 * Return: integer value
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
	{
		return (0);
	}
	return (1);
}
