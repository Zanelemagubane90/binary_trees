#include "binary_trees.h"

/**
 * binary_tree_uncle - method that finds if a node is sibling
 * @u_node: node to check
 * Return: The uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *u_node)
{
	if (u_node == NULL || u_node->parent == NULL || u_node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (u_node->parent->parent->left == u_node->parent)
		return (u_node->parent->parent->right);
	return (u_node->parent->parent->left);
}
