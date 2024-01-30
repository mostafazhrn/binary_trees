#include "binary_trees.h"
/**
 * binary_tree_height - This code shall measure the height of a binary tree
 * @tree: This shall represent the root node of the tree to measure the height
 * Return: This shall return the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t lft_hght = 0;
size_t rt_hght = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left != NULL)
{
lft_hght = binary_tree_height(tree->left) + 1;
}
if (tree->right != NULL)
{
rt_hght = binary_tree_height(tree->right) + 1;
}
if (lft_hght > rt_hght)
{
return (lft_hght);
}
else
{
return (rt_hght);
}
}
