#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Integer to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){

