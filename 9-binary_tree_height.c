#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	/* Measure the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Measure the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Return the greater height plus one for the current node */
	if (left_height > right_height)
	{
		return (1 + left_height);
	}
	return (1 + right_height);
}

