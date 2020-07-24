#include "binary_trees.h"
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
