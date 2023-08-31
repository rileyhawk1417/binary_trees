#include "binary_trees.h"
/**
 * binary_tree_sibling - Checks if binary tree has a sibling
 * @node: The node to check
 * Return: binary_tree_t The binary tree node
 * Description: Checks the binary tree if there are siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
	return (NULL);

if (node == node->parent->left)
	return (node->parent->right);

return (node->parent->left);
}
