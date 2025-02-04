#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);  /* If tree is NULL, return 0 */

	size_t count = 0;

	/* Check if current node has at least one child (left or right) */
	if (tree->left != NULL || tree->right != NULL)
	{
		count = 1;  /* This node has at least one child */
	}

	/* Recursively count nodes in the left and right subtrees */
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);  /* Return the total count */
}

