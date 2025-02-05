#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The number of leaves in the tree (0 if tree is NULL)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	/* If it's a leaf node (no left or right children), increment count */
	if (tree->left == NULL && tree->right == NULL)
	{
		count++;
	}

	/* Recurse through left and right subtrees */
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}

