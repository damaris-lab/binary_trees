#include "binary_trees.h"
/**
 * binary_tree_depth - calculates the depth of a binary tree
 * @tree: A pointer to the node to measure the depth
 *
 * Return: The depth of the node
 * If tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
