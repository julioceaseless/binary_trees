#include "binary_trees.h"
/**
 * binary_tree_delete - deletes the entire binary tree
 *
 * @tree: pointer to the root node of the tree to delete
 * Return: nothing!
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	/* delete right nodes recursively */
	binary_tree_delete(tree->right);

	/* delete left nodes recursively */
	binary_tree_delete(tree->left);

	/* free memory of current node */
	free(tree);
}
