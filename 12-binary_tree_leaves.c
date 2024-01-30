#include "binary_trees.h"
/**
 * binary_tree_leaves - This code shall count the leaves in a binary tree
 * @tree: This shall represent the root node of the tree
 * Return: This shall return the number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t lft_lvs = 0;
size_t rt_lvs = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
lft_lvs = binary_tree_leaves(tree->left);
rt_lvs = binary_tree_leaves(tree->right);
return (lft_lvs + rt_lvs);
}
