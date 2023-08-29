#include "binary_trees.h"

/**
 * binary_tree_postorder - Check if binary tree is leaf
 * @tree: binary_tree_t
 * @func: void int function
 * Return: Nothing
 * Description: It first visits the left & right branches then
 * execute @func
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

if (!tree || !func)
	return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
