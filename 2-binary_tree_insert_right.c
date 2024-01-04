#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node to the right of its parent. If the parent 
 * already has a right child, the new node will be placed one level below the 
 * existing right child, becoming the new right child.
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *b_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	b_node = binary_tree_node(parent, value);
	if (b_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		b_node->right = parent->right;
		parent->right->parent = b_node;
	}
	parent->right = b_node;
	return (b_node);
}
