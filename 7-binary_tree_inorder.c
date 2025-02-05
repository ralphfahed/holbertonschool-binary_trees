#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node. The value in the node
 *        must be passed as a parameter to this function
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);	/* Traverse the left subtree */
	func(tree->n);					/* Visit the root node */
	binary_tree_inorder(tree->right, func);	/* Traverse the right subtree */
}

