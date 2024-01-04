#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: parent node
 * @left: left child node
 * @right:right child node
 */

struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/**
 * struct link_s - structure for advanced tasks
 *
 * @n: node depth specified
 * @node: tree to store of node
 * @next: the linked list
 */

typedef struct link_s
{
	size_t n;
	struct binary_tree_s const *node;
	struct link_s *next;
} link_t;

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
int binary_tree_is_leaf(const binary_tree_t *b_node);
int binary_tree_balance(const binary_tree_t *b_tree);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_sibling(binary_tree_t *b_node);
binary_tree_t *binary_tree_uncle(binary_tree_t *b_node);
size_t binary_tree_height(const binary_tree_t *b_tree);
size_t binary_tree_depth(const binary_tree_t *b_tree);
size_t binary_tree_size(const binary_tree_t *b_tree);
size_t binary_tree_leaves(const binary_tree_t *b_tree);
size_t binary_tree_nodes(const binary_tree_t *b_tree);
void binary_tree_delete(binary_tree_t *b_tree);
void binary_tree_print(const binary_tree_t *);
void binary_tree_preorder(const binary_tree_t *b_tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *b_tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *b_tree, void (*func)(int));
int binary_tree_is_full(const binary_tree_t *b_tree);
int binary_tree_is_perfect(const binary_tree_t *b_tree);
int binary_tree_is_root(const binary_tree_t *b_node);

#endif /* _BINARY_TREES_H_ */
