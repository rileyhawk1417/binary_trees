#include "binary_trees.h"

/**
* binary_tree_node - Create the binary tree root
* @parent: binary_tree_t
* @value: int
* Return: binary_tree_t
* Description: Creates a new binary tree root
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *root;
root = malloc(sizeof(binary_tree_t));

if (root == NULL)
	return (NULL);

root->parent = parent;
root->n = value;
root->left = NULL;
root->right = NULL;

return (root);
}
