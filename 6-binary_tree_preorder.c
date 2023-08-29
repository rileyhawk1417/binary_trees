#include "binary_trees.h"

/**
 * binary_tree_preorder - Check if binary tree is leaf
 * @tree: binary_tree_t
 * @func: void int function
 * Return: Nothing
 * Description: It first executes @func then recursively
 * does the same to both the left & right side branches
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

if (!tree || !func)
	return;

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
