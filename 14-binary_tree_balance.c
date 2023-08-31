#include "binary_trees.h"
#include <stdlib.h>

/**
 * get_tree_height - Checks the balance of individual binary trees
 * @tree: Pointer to the root node of the tree to print
 * Return: intt binary tree if balanced
 * Description: Checks if the binary tree is balanced
 */
int get_tree_height(const binary_tree_t *tree)
{
int left_h;
int right_h;
if (!tree)
	return (0);
left_h = tree->left ? 1 + binary_tree_height(tree->left) : 1;
right_h = tree->right ? 1 + binary_tree_height(tree->right) : 1;
return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_balance - Checks the balance of the binary trees
 * @tree: Pointer to the root node of the tree to print
 * Return: size_t binary tree if balanced
 * Description: Checks if the binary tree is balanced
 */
int binary_tree_balance(const binary_tree_t *tree)
{

int balanceLeft = 0, balanceRight = 0, result = 0;

if (!tree)
	return (0);

balanceLeft = get_tree_height(tree->left);
balanceRight = get_tree_height(tree->right);
result = balanceLeft - balanceRight;

return (result);
}
