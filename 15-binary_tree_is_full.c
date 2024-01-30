#include "binary_trees.h"
/**
 * binary_tree_is_full - This code shall check if a binary tree is full
 * @tree: This shall represent the root node of the tree to check
 * Return: This shall return 1 if tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
int lft_full = 0;
int rt_full = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
lft_full = binary_tree_is_full(tree->left);
rt_full = binary_tree_is_full(tree->right);
if (lft_full == 0 || rt_full == 0)
{
return (0);
}
return (1);
}
