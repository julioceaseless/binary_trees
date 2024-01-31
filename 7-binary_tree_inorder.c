#include "binary_trees.h"
/**
 * binary_tree_inorder - reads all data in a binary tree recursively
 * using preorder traversal.
 *
 * @tree: pointer to the root node of the binary tree
 * @func: pointer to the printing function
 *
 * Return: nothing!
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* base case */
	if (tree == NULL || func == NULL)
		return;

	/* read left nodes */
	binary_tree_inorder(tree->left, func);

	/* print the data */
	func(tree->n);

	/* read right nodes */
	binary_tree_inorder(tree->right, func);
}
