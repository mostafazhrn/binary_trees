#include "binary_trees.h"
/**
 * binary_tree_depth - This code shall measure the depth of a node
 * @tree: This shall represent the node to measure the depth
 * Return: This shall return the depth of the node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t dpth = 0;
if (tree == NULL)
{
return (0);
}
while (tree->parent != NULL)
{
dpth++;
tree = tree->parent;
}
return (dpth);
}
