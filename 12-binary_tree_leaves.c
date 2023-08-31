
#include "binary_trees.h"

/**
 * binary_tree_leaves - Checks the leaves of the binary trees
 * @tree: Pointer to the root node of the tree to print
 * Return: size_t binary tree leaves
 * Description: Gets the number of leaves of a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree)
	return (0);

if (tree->left == NULL && tree->right == NULL)
	return (1);

else
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
