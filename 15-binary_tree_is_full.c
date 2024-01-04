#include "binary_trees.h"

/**
 * binary_tree_is_full - method that says if a tree is full or not
 * a tree is full if it has tow or none children
 * @bt_tree: tree to check
 * Return: 1 if it is a full 0 if not
 */

int binary_tree_is_full(const binary_tree_t *bt_tree)
{
	int bf_left = 0, bf_right = 0;

	if (bt_tree == NULL)
	{
		return (0);
	}
	else
	{
		if (bt_tree->left && bt_tree->right)
		{
			bf_left = binary_tree_is_full(bt_tree->left);
			bf_right = binary_tree_is_full(bt_tree->right);
			if (bf_left == 0 || bf_right == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!bt_tree->left && !bt_tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
