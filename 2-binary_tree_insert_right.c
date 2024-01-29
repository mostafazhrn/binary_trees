#include "binary_trees.h"
/**
 * binary_tree_insert_right - This code shall insert a node as the right-child
 * @parent: This shall represent the parent node
 * @value: This shall represent the value of the node
 * Return: This shall return the new node or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *nuevo_node_rt = NULL;
if (parent == NULL)
{
return (NULL);
}
nuevo_node_rt = malloc(sizeof(binary_tree_t));
if (nuevo_node_rt == NULL)
{
return (NULL);
}
nuevo_node_rt->n = value;
nuevo_node_rt->parent = parent;
nuevo_node_rt->left = NULL;
nuevo_node_rt->right = parent->right;
if (parent->right != NULL)
{
parent->right->parent = nuevo_node_rt;
}
parent->right = nuevo_node_rt;
return (nuevo_node_rt);
}
