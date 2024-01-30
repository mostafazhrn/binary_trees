#include "binary_trees.h"
/**
 * binary_tree_preorder - This code shall search binary tree using pre-order
 * @tree: This shall represent the root node of the tree to traverse
 * @func: This shall represent a pointer to a function to call for each node
 * Return: This shall return nothing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
