#include "binary_trees.h"
/**
 * binary_tree_height - determine the height of a binary tree
 * @tree: pointer to root node
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	return ((height_l > height_r ? height_l : height_r) + 1);
}
