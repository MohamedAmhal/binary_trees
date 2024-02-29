#include "binary_trees.h"

/**
 * binary_tree_insert_left - this is the function return the tree
 * @parent: this is the parent of the tree
 * @value: this is the value
 * Return: the binary tree
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_insert_left *tree;

	if (parent == NULL)
	{
		return (NULL);
	}
	tree = binary_tree_node(parent, value);
	if (tree == NULL)
	{
		return (NULL);
	}
	if (tree->left != NULL)
	{
		tree->left = parent->left;
		parent->left->parent = tree;
	}
	parent->left = tree;
	return (tree);
}
