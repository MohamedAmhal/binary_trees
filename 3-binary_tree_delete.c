#include "binary_trees.h"

/**
 * binary_tree_delete - this function delete the tree
 * @tree: this is the tree
 * Return: nothing the void function
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
