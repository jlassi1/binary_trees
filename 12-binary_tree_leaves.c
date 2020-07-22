#include "binary_trees.h"
/**
 * binary_tree_leaves-counts the leaves in a binary tree
 *@tree:  pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaves or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves = 0;

if (!tree)
return (leaves);
if (!tree->right && !tree->left)
{
leaves++;
return (leaves);
}
if (tree->left)
leaves += binary_tree_leaves(tree->left);
if (tree->right)
leaves += binary_tree_leaves(tree->right);

return (leaves);

}
