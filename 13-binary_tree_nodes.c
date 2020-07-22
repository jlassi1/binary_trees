#include "binary_trees.h"
/**
 *binary_tree_nodes-counts the nodes with at least 1 child in a binary tree
 *@tree:a pointer to the root node of the tree to count the number of nodes
 *
 *Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes = 0;

if (!tree)
return (nodes);
if (!tree->right && !tree->left)
return (nodes);


nodes += (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);

return (nodes);
}
