#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: The tree to delete
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp_left, *temp_right;

	if (tree == NULL)
		return;

	temp_left = tree->left;
	temp_right = tree->right;
	free(tree);
	binary_tree_delete(temp_left);
	binary_tree_delete(temp_right);
}
