#include "binary_trees.h"
/**
 * binary_tree_nodes - This code shall count the nodes with 1 child in brn tree
 * @tree: This shall represent the root node of the tree
 * Return: This shall return the number of nodes in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t lft_nds = 0;
size_t rt_nds = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left != NULL || tree->right != NULL)
{
lft_nds = binary_tree_nodes(tree->left);
rt_nds = binary_tree_nodes(tree->right);
return (lft_nds + rt_nds + 1);
}
return (0);
}
