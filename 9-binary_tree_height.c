#include "binary_trees.h"
/**
 *binary_tree_height- measures the height of a binary tree
 *@tree: a pointer to the root node of the tree to measure the height.
 *Return: nbr of level
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t nr = 0, nf = 0;

if (!tree->right && !tree->left)
return (0);
while (tree)
{
nf++;
tree = tree->left;
}

while (tree)
{
nr++;
tree = tree->right;
}

if (nr > nf)
return (nr);

else
return (nf);


}
