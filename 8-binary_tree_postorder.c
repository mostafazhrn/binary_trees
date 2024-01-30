#include "binary_trees.h"
/**
 * binary_tree_postorder - This code shall gothrough binary tree usg post-order
 * @tree: This shall represent the root node of the tree to traverse
 * @func: This shall represent a pointer to a function to call for each node
 * Return: This shall return nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
