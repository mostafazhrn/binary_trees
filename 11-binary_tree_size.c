#include "binary_trees.h"
/**
 * binary_tree_size - This code shall measure the size of binary tree
 * @tree: This shall represent the root node of the tree to measure the size
 * Return: This shall return the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t sz = 0;
if (tree == NULL)
{
return (0);
}
sz = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
return (sz);
}
