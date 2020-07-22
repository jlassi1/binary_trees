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


binary_tree_t *right;

if (parent == NULL)
return (NULL);

right = malloc(sizeof(binary_tree_t));
if (right == NULL)
return (NULL);


right->parent = parent;
right->n = value;
right->right = NULL;
right->right = NULL;


if (parent->right == NULL)
{
parent->right = right;
}
else
{

parent->right->parent = right;
right->right = parent->right;
parent->right = right;
}

return (right);

}
