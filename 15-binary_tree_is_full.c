
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - Checks if binary tree has both branches
 * @tree: Pointer to the root node of the tree to print
 * Return: int binary tree if full
 * Description: Checks if the binary tree has both left & right branches
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
	return (0);

if (!tree->left && !tree->right)
	return (1);

if (tree->left && tree->right)
	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
return (0);
}
