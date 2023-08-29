#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if binary tree is leaf
 * @node: binary_tree_t
 * Return: int
 * Description: Check if binary tree is a leaf or not
 * 0 if its a leaf & 1 if its not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

if (!node || node->left || node->right)
	return (0);
/*
 * NOTE: One could simply use a tenary operator
 * return ((!node || node->left || node->right) ? 0:1);
 */
return (1);
}
