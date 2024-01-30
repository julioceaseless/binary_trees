#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node as the left child of another node
 *
 * @parent: pointer to the node to insert the left child
 * @value: data to store in the node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->parent = parent;
	newnode->right = NULL;
	newnode->left = NULL;
	newnode->n = value;

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;
	return (newnode);
}
