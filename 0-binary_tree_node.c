#include "binary_trees.h"

/**
 * binary_tree_node - creates a tree node
 *
 * @parent: pointer to the first node
 * @value: data stored in the node
 *
 * Return: pointer to tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	return (newnode);
}
