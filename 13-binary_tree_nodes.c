#include "binary_trees.h"

/**
 * binary_tree_nodes - Checks the nodes of the binary trees
 * @tree: Pointer to the root node of the tree to print
 * Return: size_t binary tree nodes
 * Description: Gets the nodes number of a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (!tree || (!tree->left && !tree->right))
	return (0);

return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
