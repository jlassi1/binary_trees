#include "binary_trees.h"
/**
 *binary_tree_uncle-finds the uncle of a node
 *@node: a pointer to the node to find the uncle
 *
 *Return: a pointer to the uncle node or NULL if node has no uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *tmp;

if (!node || !node->parent || !node->parent->parent)
return (NULL);


tmp = node->parent->parent;

if (tmp->right == node->parent)
return (node->parent->parent->left);

if (tmp->left == node->parent)
return (node->parent->parent->right);


return (NULL);
}
/**
 *binary_trees_ancestor-finds the lowest common ancestor of two nodes
 *@first: a pointer to the first node
 *@second: A pointer to the second node
 *
 *Return: a pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
const binary_tree_t *f, *s;

	if (!first || !second)
		return (NULL);

	f = first;
	if (second == first)
		return ((binary_tree_t *)first);

	while (f)
	{
		s = second;
		while (s)
		{
			if (s == f)
				return ((binary_tree_t *)f);
			s = s->parent;
		}
		f = f->parent;
	}
	return (NULL);

}
