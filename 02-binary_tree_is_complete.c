#include "binary_trees.h"
/**
 *binary_tree_height- measures the height of a binary tree
 *@tree: a pointer to the root node of the tree to measure the height.
 *Return: nbr of level
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t nr = 0, nf = 0;

	if (!tree)
		return (0);
	nf = binary_tree_height(tree->left);
	nr = binary_tree_height(tree->right);
	if (nf > nr)
		return (nf + 1);
	else
		return (nr + 1);
}
/**
 *binary_tree_nodes-counts the nodes with at least 1 child in a binary tree
 *@tree:a pointer to the root node of the tree to count the number of nodes
 *
 *Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes = 0;

if (!tree)
return (nodes);

nodes += (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);

return (nodes);
}

/**
 * 
 * 
 * 
 */
int exponent(int x, int n)
{
    int pow = 1;
    int i=0;
    for(i=0; i< n; i++)
         pow *= x;
    return pow;
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

    if(tree == NULL)
        return (0);
    int h = binary_tree_height(tree);
    int n = binary_tree_nodes(tree);
    if(n == exponent(2,h) - 1)
        return (1);
    else
        return (0);

}
