#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL); /* If node, parent, or grandparent is NULL, no uncle */

	/* Check if the parent is the left child of the grandparent */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	/* Otherwise, parent is the right child, return the left sibling */
	return (node->parent->parent->left);
}

