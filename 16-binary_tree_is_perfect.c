#include "binary_trees.h"

/**
 * tree_is_perfect - function that says if a tree is perfect or not
 * it has to be the same quantity of levels in left as right, and also
 * each node has to have 2 nodes or none
 * @bt_tree: tree to check
 * Return: 0 if is not a perfect or other number that is the level of height
 */
int tree_is_perfect(const binary_tree_t *bt_tree)
{
	int tp_left = 0, tp_right = 0;

	if (bt_tree->left && bt_tree->right)
	{
		tp_left = 1 + tree_is_perfect(bt_tree->left);
		tp_right = 1 + tree_is_perfect(bt_tree->right);
		if (tp_right == tp_left && tp_right != 0 && tp_left != 0)
			return (tp_right);
		return (0);
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

/**
 * binary_tree_is_perfect - perfect or not a tree
 * @bt_tree: tree to check
 * Return: 1 is it is or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *bt_tree)
{
	int tp_output = 0;

	if (bt_tree == NULL)
	{
		return (0);
	}
	else
	{
		tp_output = tree_is_perfect(bt_tree);
		if (tp_output != 0)
		{
			return (1);
		}
		return (0);
	}
}
