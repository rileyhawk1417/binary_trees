#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if binary tree is leaf
 * @node: binary_tree_t
 * Return: int
 * Description: Check if binary tree is the root or not
 * 0 if its the root & 1 if its not
 */
int binary_tree_is_root(const binary_tree_t *node)
{

if (!node || node->parent)
	return (0);
/*
 * NOTE: One could simply use a tenary operator
 * return ((!node || node->parent) ? 0:1);
 */
return (1);
}
