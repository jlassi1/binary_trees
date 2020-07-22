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

if (!node || !node->parent->parent)
return (NULL);


tmp = node->parent->parent;

if (tmp->right->right == node)
return (node->parent->parent->left);

if (tmp->left->left == node)
return (node->parent->parent->right);

if (tmp->right->left == node)
return (node->parent->parent->left);

if (tmp->left->right == node)
return (node->parent->parent->right);

return (NULL);
}
