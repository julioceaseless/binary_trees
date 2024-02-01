#include "binary_trees.h"
/**
 * binary_trees_ancestor - checks the lowest common ancestor
 * @first: first node
 * @second: second node
 *
 * Return: pointer to the common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	/* exit if either node is null */
	if (first == NULL || second == NULL)
		return (NULL);

	/* check if either node is binary tree root */
	if (first->parent == NULL || second->parent == NULL)
		return (NULL);

	/* recursively look for the common ancestor */
	if (first->parent != second->parent)
		return (binary_trees_ancestor(first->parent, second->parent));

	return ((binary_tree_t *)(first->parent));
}
