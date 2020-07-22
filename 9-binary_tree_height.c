#include "binary_trees.h"
/**
 *binary_tree_height- measures the height of a binary tree
 *@tree: a pointer to the root node of the tree to measure the height.
 *Return: nbr of level
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t nr = 0, nf = 0;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);
	nf = binary_tree_height(tree->left) + 1;
	nr = binary_tree_height(tree->right) + 1;
	if (nf > nr)
		return (nf);
	else
		return (nr);
}
