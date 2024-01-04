#include "binary_trees.h"

/**
 * binary_tree_preorder - print the elements of a tree by traversing it in pre-order.
 * @bt_tree: tree to go through
 * @func: function to use
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *bt_tree, void (*func)(int))
{
	if (bt_tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(bt_tree->left, func);
		func(bt_tree->n);
		binary_tree_inorder(bt_tree->right, func);
	}
}
