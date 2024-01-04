#include "binary_trees.h"

/**
 * binary_tree_sibling - method that finds if a node is sibling
 * @b_node: node to check
 * Return: The sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *b_node)
{
	if (b_node == NULL || b_node->parent == NULL)
	{
		return (NULL);
	}
	if (b_node->parent->left == b_node)
		return (b_node->parent->right);
	return (b_node->parent->left);
}
