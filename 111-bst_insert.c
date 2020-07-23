#include "binary_trees.h"
/**
 *bst_insert- inserts a value in a Binary Search Tree
 *@tree: a double pointer to the root node of the BST to insert the value
 *@value:the value to store in the node to be inserted
 *
 *Return: a pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *ptr = NULL, *tmp = NULL;

ptr = binary_tree_node(*tree, value);

if(!tree || !*tree)
return (ptr);
tmp = *tree;
if (value == tmp->n)
    return (NULL);
if (value < tmp->n)
{
    tmp->left = bst_insert(&tmp->left, value);

}
else if (value > tmp->n)
{
    tmp->right = bst_insert(&tmp->right, value);

}
tree = &tmp;
return(*tree);

}
