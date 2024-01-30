#include "binary_trees.h"
/**
 * binary_tree_delete - This code shall delete an entire binary tree
 * @tree: This shall represent the root node of the tree to delete
 * Return: This shall return nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
  if (tree == NULL)
    {
      return;
    }
  binary_tree_delete(tree->left);
  binary_tree_delete(tree->right);
  free(tree);
}
