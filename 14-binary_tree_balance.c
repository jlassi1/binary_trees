#include "binary_trees.h"
/**
 *binary_tree_balance- measures the balance factor of a binary tree
 *
 *@tree:a pointer to the root node of the tree to measure the balance factor
 *
 *Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int nr = 0, nf = 0;
if (!tree)
return (0);
const binary_tree_t *tmp;
tmp = tree;
if (!tree->right && !tree->left)
return (0);
while (tmp)
{
nf++;
tmp = tmp->left;
}
tmp = tree;
while (tmp)
{
nr++;
tmp = tmp->right;
}

return (nf - nr);
}
