#include "binary_trees.h"
/**
 * binary_tree_sibling - This code shall find the sibling of a node
 * @node: This shall represent the node to find the sibling
 * Return: This shall return a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (NULL);
}
if (node->parent->left != node)
{
return (node->parent->left);
}
else if (node->parent->right != node)
{
return (node->parent->right);
}
return (NULL);
}
