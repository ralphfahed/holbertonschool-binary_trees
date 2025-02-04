#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node. The value in the node
 *        be passed as a parameter to this function.
 *
 * Return: Nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);  /* Process the current node */
	binary_tree_preorder(tree->left, func);  /* Traverse the left subtree */
	binary_tree_preorder(tree->right, func);  /* Traverse the right subtree */
}

