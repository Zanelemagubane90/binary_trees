#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree 
 * @bt_tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *bt_tree)
{
	size_t x = 0;
	size_t z = 0;

	if (bt_tree == NULL)
	{
		return (0);
	}
	else
	{
		if (bt_tree)
		{
			x = bt_tree->left ? 1 + binary_tree_height_b(bt_tree->left) : 1;
			z = bt_tree->right ? 1 + binary_tree_height_b(bt_tree->right) : 1;
		}
		return ((x > z) ? x : z);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @bt_tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *bt_tree)
{
	int bf_right = 0, bf_left = 0, bf = 0;

	if (bt_tree)
	{
		bf_left = ((int)binary_tree_height_b(bt_tree->left));
		bf_right = ((int)binary_tree_height_b(bt_tree->right));
		bf = bf_left - bf_right;
	}
	return (bf);
}
