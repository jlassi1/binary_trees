#include "binary_trees.h"

/**
 * binary_tree_size-measures the size of a binary tree
 *@tree: a pointer to the root size of the tree to measure the size
 *
 *Return: size of tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;

if (!tree)
return (size);
if (!tree->right && !tree->left)
{
size++;
return (size);
}
if (tree->left)
size += binary_tree_size(tree->left);
if (tree->right)
size += binary_tree_size(tree->right);

return (size + 1);
}
/**
 * check_complete-check if the tree is complete
 * @tree: pointer to the root of the tree
 * @idx: the index of each node
 * @size: the size
 * Return: 1 if complete or 0 if not
 */
int check_complete(const binary_tree_t *tree, int idx, int size)
{
if (!tree)
return (1);

if (idx >= size)
return (0);
if ((check_complete(tree->left, 2 * idx + 1, size) &&
		check_complete(tree->right, 2 * idx + 2, size)) == 1)
	return (1);


return (0);

}

/**
 *binary_tree_is_complete-checks if a binary tree is complete
 *
 *@tree: a pointer to the root node of the tree to check
 *
 *Return: 1 if the tree is complete or 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
int size;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);

	return (check_complete(tree, 0, size));
}
