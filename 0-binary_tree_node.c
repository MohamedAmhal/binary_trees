#include "binary_trees.h"

/**
 * binary_tree_t : this is the function that create a new node !
 * @parent: pointer that point of a tree
 * @value: the tree noeud!
 * return: a binary tree!
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *tree;
    tree = malloc(sizeof(binary_tree_t));
    if (tree == NULL)
    {
        return (NULL);
    }
    tree ->n = value;
    tree ->parent = parent;
    tree ->right = NULL;
    tree ->left = NULL;

    return (tree);
}