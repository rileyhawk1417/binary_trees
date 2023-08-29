#include "binary_trees.h"

/**
 * binary_tree_height - Checks the height of the binary trees
 * @tree: Pointer to the root node of the tree to print
 * Return: size_t binary tree height
 * Description: Gets the number of branches within the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_h;
size_t right_h;
left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return (left_h > right_h ? left_h : right_h);
}
