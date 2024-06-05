#include "binary_trees.h"
/**
 * binary_tree_node - creates a new node in a binary tree
 * @parent: The parent of the node
 * @value: The integer value of the node
 *
 * Return: On success, a pointer to the new node
 * Otherwise return NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
