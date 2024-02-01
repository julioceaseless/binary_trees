#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full and 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* both subtrees are NULL (FULL) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* one subtree is NULL and the other is not */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* recursively check the left and right subtrees */
	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}
