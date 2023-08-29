#include "binary_trees.h"

/**
 * binary_tree_depth - Checks the depth of the binary trees
 * @tree: Pointer to the root node of the tree to print
 * Return: size_t binary tree depth
 * Description: Gets the depth of a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t treeDepth = 0;
if (!tree)
	return (0);

for (treeDepth = 0; (tree->parent); treeDepth++)
	tree = tree->parent;

return (treeDepth);
}
