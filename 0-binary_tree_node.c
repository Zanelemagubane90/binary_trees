#include "binary_trees.h"

/**
 * binary_tree_node - makes a binary node
 * @parent: Node of a parent
 * @value: Value of the node
 * Return: the made node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *b_node;

	b_node = malloc(sizeof(binary_tree_t));
	if (b_node == NULL)
	{
		return (NULL);
	}
	b_node->n = value;
	b_node->parent = parent;
	b_node->left = NULL;
	b_node->right = NULL;
	return (b_node);
}
