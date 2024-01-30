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
/**
 * binary_tree_is_perfect - This code shall check if a binary tree is perfect
 * @tree: This shall represent the root node of the tree to check
 * Return: This shall return 1 if tree is perfect, otherwise 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int lft_hght = 0;
int rt_hght = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
lft_hght = binary_tree_height(tree->left);
rt_hght = binary_tree_height(tree->right);
if (lft_hght != rt_hght)
{
return (0);
}
return (1);
}
