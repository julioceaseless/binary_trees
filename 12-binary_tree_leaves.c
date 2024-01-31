#include "binary_trees.h"

/**
 * binary_tree_leaves - Finds tge number of leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Size of the binary tree. If tree is NULL, returns 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
