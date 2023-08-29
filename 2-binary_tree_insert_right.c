#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert into right of binary tree
 * @parent: binary_tree_t
 * @value: int
 * Return: binary_tree_t
 * Description: Adds a right branch to the binary tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *right_branch;

if (parent == NULL)
	return (NULL);

right_branch = malloc(sizeof(binary_tree_t));

if (right_branch == NULL)
	return (NULL);

right_branch->n = value;
right_branch->parent = parent;
right_branch->right = parent->right;
right_branch->left = NULL;
parent->right = right_branch;

if (right_branch->right != NULL)
{
right_branch->right->parent = right_branch;
}

return (right_branch);
}
