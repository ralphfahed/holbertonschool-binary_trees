#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree (0 if tree is NULL)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	/* If the tree is NULL, the height is 0 */
	if (tree == NULL)
	{
		return (0);
	}

	/* Recursively calculate the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Recursively calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* If it's a leaf node, return 0 */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	/* Return the greater of the two heights, plus 1 for the current node */
	return (1 + (left_height > right_height ? left_height : right_height));
}

