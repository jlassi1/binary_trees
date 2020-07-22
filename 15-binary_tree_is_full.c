#include "binary_trees.h"
/**
 *binary_tree_is_full- checks if a binary tree is full
 *@tree: a pointer to the root node of the tree to check
 *
 *Return: 1 if tree is full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
int nr = 0, nf = 0;
if (!tree)
return (0);

const binary_tree_t *tmp;
tmp = tree;

if (!tree->right && !tree->left)
return (0);
while (tmp->left)
{
nf++;
if (!tmp->right && tmp->left)
return (0);
if (!tmp->left && tmp->right)
return (0);
tmp = tmp->left;
}
tmp = tree;
while (tmp->right)
{
nr++;
if (!tmp->right && tmp->left)
return (0);
if (!tmp->left && tmp->right)
return (0);
tmp = tmp->right;
}
if (nr == nf)
return (1);

return (0);

}
