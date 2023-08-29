#include "binary_trees.h"

/**
 * binary_tree_inorder - Check if binary tree is leaf
 * @tree: binary_tree_t
 * @func: void int function
 * Return: Nothing
 * Description: It first visits the left branch then
 * execute @func & visits the right branch
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

if (!tree || !func)
	return;

binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
