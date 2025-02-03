#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Integer to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	/* Create a new node with malloc */
	newnode = malloc(sizeof(binary_tree_t));
	/* If the new node is empty, return NULL */
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = value; /* n is the value */
	newnode->parent = parent; /* parent = root */
	newnode->left = NULL; /* left */
	newnode->right = NULL; /* right */

	return (newnode);
}

