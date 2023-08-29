#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert into left of binary tree
 * @parent: binary_tree_t
 * @value: int
 * Return: binary_tree_t
 * Description: Adds a left branch to the binary tree
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *left_branch;

if (parent == NULL)
	return (NULL);

left_branch = malloc(sizeof(binary_tree_t));

if (left_branch == NULL)
	return (NULL);

left_branch->n = value;
left_branch->parent = parent;
left_branch->left = parent->left;
left_branch->right = NULL;
parent->left = left_branch;

if (left_branch->left != NULL)
{
left_branch->left->parent = left_branch;
}

return (left_branch);
}
