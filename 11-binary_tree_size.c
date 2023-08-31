#include "binary_trees.h"

/**
 * binary_tree_size - Checks the size of the binary trees
 * @tree: Pointer to the root node of the tree to print
 * Return: size_t binary tree size
 * Description: Gets the size of a binary tree follows inorder
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (!tree)
	return (0);

return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
