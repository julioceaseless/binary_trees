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

/**
 * binary_tree_uncle - checks if a node has an uncle
 *
 * @node: node to check the sibling of
 *
 * Return: pointer to sibling or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
