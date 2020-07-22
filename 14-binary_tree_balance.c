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
int nr, nf;
if (!tree)
return (0);
if (tree->left)
nf = binary_tree_height(tree->left) + 1;
else
nf = binary_tree_height(tree->left);

if (tree->right)
nr = binary_tree_height(tree->right) + 1;
else
nr = binary_tree_height(tree->right);

return (nf - nr);
}
