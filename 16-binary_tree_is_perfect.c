#include "binary_trees.h"
/**
 *is_perfect-check if the tree is perfect
 *@tree: a pointer to the root to check
 *@d: the depth of tree
 *@level: the level of tree
 *
 *Return: 1 if it is perfect otherwise 0
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{

if (tree == NULL)
return (1);


if (tree->left == NULL && tree->right == NULL)
if (d == level + 1)
return (1);


if (tree->left == NULL || tree->right == NULL)
return (0);

return (is_perfect(tree->left, d, level + 1) &&
is_perfect(tree->right, d, level + 1));
}
/**
 *binary_tree_is_perfect-checks if a binary tree is perfect
 *@tree:a pointer to the root node of the tree to check
 *
 *Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int d = 0;
const binary_tree_t *tmp;

if (tree == NULL)
return (0);
tmp = tree;

while (tmp != NULL)
{
d++;
tmp = tmp->right;
}

return (is_perfect(tree, d, 0));

}
