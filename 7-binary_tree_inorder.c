#include "binary_trees.h"

/*
 * binary_tree_inorder - this the function that print L R R
 * @tree : the binary tree
 * @func: the function that print the value
 * Return: npthing (the voif function)
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
