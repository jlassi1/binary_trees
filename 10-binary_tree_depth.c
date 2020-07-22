#include "binary_trees.h"
/**
 *binary_tree_depth- measures the depth of a node in a binary tree
 *@tree:a pointer to the node to measure the depth
 *
 *Return: the depth of node or 0 id tree NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t d = 0;
if (!tree || !tree->parent)
return (d);

d = binary_tree_depth(tree->parent) + 1;

return (d);

}
