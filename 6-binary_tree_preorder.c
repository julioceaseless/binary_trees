#include "binary_trees.h"
/**
 * binary_tree_preorder - reads all data in a binary tree recursively
 * using preorder traversal.
 *
 * @tree: pointer to the root node of the binary tree
 * @func: pointer to the printing function
 *
 * Return: nothing!
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* base case */
	if (tree == NULL || func == NULL)
		return;

	/* print the data */
	func(tree->n);

	/* read left nodes */
	binary_tree_preorder(tree->left, func);

	/* read right nodes */
	binary_tree_preorder(tree->right, func);
}
