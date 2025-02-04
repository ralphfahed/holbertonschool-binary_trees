#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The size (number of nodes) of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);  /* Get size of left subtree */
	right_size = binary_tree_size(tree->right); /* Get size of right subtree */

	return (1 + left_size + right_size);  /* Add 1 for the current node */
}

