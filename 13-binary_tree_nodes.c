#include "binary_trees.h"

/**
 * binary_tree_nodes - function that returns # of nodes in a tree with children
 * @bt_tree: tree to check
 * Return: number of nodes with children
 */

size_t binary_tree_nodes(const binary_tree_t *bt_tree)
{

	size_t  b_node = 0;

	if (bt_tree == NULL)
	{
		return (0);
	}
	else
	{
		b_node += ((bt_tree->left || bt_tree->right) ? 1 : 0);
		b_node += binary_tree_nodes(bt_tree->left);
		b_node += binary_tree_nodes(bt_tree->right);
		return (b_node);
	}
}
