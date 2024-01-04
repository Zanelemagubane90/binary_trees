#include "binary_trees.h"

/**
 * binary_tree_delete - Recursively free an entire b_tree by releasing each node. 
 * The node will be freed when both its left and right children are NULL.
 * @b_tree: tree to free
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *b_tree)
{
	if (b_tree == NULL)
	{
		return;
	}
	else
	{
		if (b_tree != NULL)
		{
			binary_tree_delete(b_tree->left);
			binary_tree_delete(b_tree->right);
		}
		free(b_tree);
	}

}
