#include "binary_trees.h"

/**
 * binary_tree_insert_right- Inserts a node as the right-child of another node
 * @parent: The parent of the node
 * @value: The integer value of the node
 *
 * Return: On success, a pointer to the new node
 * Otherwise return NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);
	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (parent->right == NULL)
		parent->right = new;
	else
	{
		temp = parent->right;
		temp->parent = new;
		parent->right = new;
		new->right = temp;
	}
	return (new);
}
