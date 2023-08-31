#include "binary_trees.h"

int power_recursion(int x, int y);
size_t post_bt_size(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - Checks if the binary tree is complete
 * @tree: Pointer to the root node of the tree to print
 * Return: size_t binary tree size
 * Description: Checks if binary tree is complete with all branches
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height = 0, node = 0, power = 0;
if (!tree)
	return (0);
if (!tree->left && !tree->right)
	return (1);

height = binary_tree_height(tree);
node = post_bt_size(tree);
power = (size_t)power_recursion(2, height + 1);
return (power - 1 == node);
}

/**
 * power_recursion - Raises x to the power of y
 * @x: base number
 * @y: number to raise x to
 * Return: int Raised number
 * Description: Simply raises the power of a number recursively
 */
int power_recursion(int x, int y)
{
if (y < 0)
	return (-1);
if (y == 0)
	return (1);
else
	return (x * power_recursion(x, y - 1));
}

/**
 * post_bt_size - Checks the size of the binary trees postorder
 * @tree: Pointer to the root node of the tree to print
 * Return: size_t binary tree size
 * Description: Gets the size of a binary tree follows postorder
 */
size_t post_bt_size(const binary_tree_t *tree)
{
if (!tree)
	return (0);

return (post_bt_size(tree->left) + post_bt_size(tree->right) + 1);
}
