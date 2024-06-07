#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in binary
 * tree
 * @tree: A pointer to the root node of the tree to count the number of
 * nodes
 *
 * Return: Number of nodes with at least 1 child
 * If tree is NULL return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right, count;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	else if (tree->left != NULL || tree->right != NULL)
	{
		count = 1;
	}
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (left + right + count);
}
