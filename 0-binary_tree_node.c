#include "binary_trees.h"
/**
* binary_tree_node - Write a function that creates a binary tree node
* @parent: pointer to the parent node of the node to create
* @value: the value to put in the new node
* Return: pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;
	return (newNode);
}
