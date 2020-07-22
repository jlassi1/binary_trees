#include "binary_trees.h"
/**
 *binary_tree_postorder- goes through a binary tree using post-order traversal
 *@tree: a pointer to the root node of the tree to traverse
 *@func: a pointer to a function to call for each node value
 *
 *Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);

}
