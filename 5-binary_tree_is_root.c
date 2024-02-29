#include "binary_trees.h"

/**
 * binary_tree_is_root - this is the function that return the root of the tree
 * @node : the binary tree
 * Return: the integer value
 *
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
