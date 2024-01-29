#include "binary_trees.h"
/**
 * binary_tree_node - This code shall create a binary tree node
 * @parent: This shall represent the parent node
 * @value: This shall represent the value of the node
 * Return: This shall return the new node or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *nuevo_node;
nuevo_node = malloc(sizeof(binary_tree_t));
if (nuevo_node == NULL)
{
return (NULL);
}
nuevo_node->parent = parent;
nuevo_node->n = value;
nuevo_node->left = NULL;
nuevo_node->right = NULL;
return (nuevo_node);
}
