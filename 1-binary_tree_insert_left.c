#include "binary_trees.h"
/**
 * binary_tree_insert_left- Inserts a node as the left child of another node
 * @parent: The parent of the node
 * @value: The integer value of the node
 *
 * Return: A pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);
	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		temp = parent->left;
		temp->parent = new;
		parent->left = new;
		new->left = temp;
	}

	return (new);
}
