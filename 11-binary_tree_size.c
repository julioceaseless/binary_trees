#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Size of the binary tree. If tree is NULL, returns 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}
