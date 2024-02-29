#include "binary_trees.h"

/**
 * binary_tree_preorder - this is the function that print R L R
 * @tree : this is the binary tree
 * @func: the function that print the integer
 * Return: nothing (the void function)
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left);
		binary_tree_preorder(tree->right);
	}
}
