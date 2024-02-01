#include "binary_trees.h"
/**
 * binary_tree_sibling - checks if a node has a sibling
 *
 * @node: node to check the sibling of
 *
 * Return: pointer to sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);

	return (node->parent->right);
}
