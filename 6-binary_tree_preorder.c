#include "binary_trees.h"

/**
 * binary_tree_preorder - print the elements of a tree by traversing it in pre-order.
 * @bt_tree: tree to go through
 * @func: function to use
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *bt_tree, void (*func)(int))
{
	if (bt_tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(bt_tree->n);
		binary_tree_preorder(bt_tree->left, func);
		binary_tree_preorder(bt_tree->right, func);
	}
}
