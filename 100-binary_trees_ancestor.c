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
	if (!first || !second)
		return (NULL);
	if (second == first)
		return ((binary_tree_t *)first);
	if (second->parent == first)
		return ((binary_tree_t *)first);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);
	if ((binary_tree_t *)first == binary_tree_uncle((binary_tree_t *)second))
		return ((binary_tree_t *)first);
	if ((binary_tree_t *)second == binary_tree_uncle((binary_tree_t *)first))
		return ((binary_tree_t *)second);
    if (first->parent->parent == second->parent->parent)
        return((binary_tree_t *)second->parent->parent);

	return (NULL);

}
