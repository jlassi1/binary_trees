#include "binary_trees.h"
/**
 *binary_tree_insert_right-inserts a node as the right-child of another node
 *@parent: a pointer to the node to insert the right-child in
 *@value:value to store in the new node
 *
 *Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{


binary_tree_t *r;

if (parent == NULL)
return (NULL);

r = malloc(sizeof(binary_tree_t));
if (r == NULL)
return (NULL);


r->parent = parent;
r->n = value;
r->right = NULL;
r->left = NULL;


if (parent->right == NULL)
{
parent->right = r;
}
else
{

parent->right->parent = r;
r->right = parent->right;
parent->right = r;
}

return (r);

}
