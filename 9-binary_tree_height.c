#include "binary_trees.h"

/**
 * binary_tree_height - method that measures the height of a binary tree
 * @bt_tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *bt_tree)
{
	size_t x = 0;
	size_t y = 0;

	if (bt_tree == NULL)
	{
		return (0);
	}
	else
	{
		if (bt_tree)
		{
			x = bt_tree->left ? 1 + binary_tree_height(bt_tree->left) : 0;
			y = bt_tree->right ? 1 + binary_tree_height(bt_tree->right) : 0;
		}
		return ((x > y) ? x : y);
	}
}
