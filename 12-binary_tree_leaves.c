#include "binary_trees.h"

/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @bt_tree: tree to check
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *bt_tree)
{
	size_t lvs = 0, left = 0, right = 0;

	if (bt_tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_leaves(bt_tree->left);
		right = binary_tree_leaves(bt_tree->right);
		lvs = left + right;
		return ((!left && !right) ? lvs + 1 : lvs + 0);
	}
}
