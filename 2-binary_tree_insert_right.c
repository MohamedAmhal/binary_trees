#include "binary_trees.h"

/**
 * binary_tree_insert_right - this is the function that insert in right
 * @parent: this is the parent
 * @value: this is the value
 * Return: the tree
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	if (parent == NULL)
	{
		return (NULL);
	}
	tree = binary_tree_node(parent, value);
	if (tree == NULL)
	{
		return (NULL);
	}
	if (parent->right != 0)
	{
		tree->right = parent->right;
		parent->right->parent = tree;
	}
	parent->right = tree;
	return (tree);
}
