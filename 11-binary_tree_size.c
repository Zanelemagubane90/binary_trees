#include "binary_trees.h"

/**
 * binary_tree_size - method that return the amount of a tree
 * @bt_tree: tree to check
 * Return: size of bt_tree
 */

size_t binary_tree_size(const binary_tree_t *bt_tree)
{
	size_t t_amount = 0, y = 0, x = 0;

	if (bt_tree == NULL)
	{
		return (0);
	}
	else
	{
		x = binary_tree_size(bt_tree->left);
		y = binary_tree_size(bt_tree->right);
		t_amount = y + x + 1;
	}
	return (t_amount);
}
