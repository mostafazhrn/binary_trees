#include "binary_trees.h"
/**
 * binary_tree_insert_left - This code shall insert a node as the left-child
 * @parent: This shall represent the parent node
 * @value: This shall represent the value of the node
 * Return: This shall return the new node or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *nuevo_node_left = NULL;
if (parent == NULL)
{
return (NULL);
}
nuevo_node_left = malloc(sizeof(binary_tree_t));
if (nuevo_node_left == NULL)
{
return (NULL);
}
nuevo_node_left->n = value;
nuevo_node_left->parent = parent;
nuevo_node_left->left = parent->left;
nuevo_node_left->right = NULL;
if (parent->left != NULL)
{
parent->left->parent = nuevo_node_left;
}
parent->left = nuevo_node_left;
return (nuevo_node_left);
}
