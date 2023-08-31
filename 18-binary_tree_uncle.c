#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a binary tree
 * @node: Pointer to the root node of the tree to print
 * Return: binary_tree_t The uncle node
 * Description: Looks for the uncle node in the tree
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !node->parent)
	return (NULL);

return (binary_tree_sibling(node->parent));
}
