#include "binary_trees.h"
/**
 *binary_tree_sibling-finds the sibling of a node
 *@node:a pointer to the node to find the sibling
 *
 *Return: a pointer to the sibling node or NULL if faileur
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);

if (!node->parent->left && !node->parent->right)
return (NULL);

if (node->parent->right == node)
return (node->parent->left);

else
return (node->parent->right);
}
