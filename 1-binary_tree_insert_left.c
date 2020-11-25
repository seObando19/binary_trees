#include "binary_trees.h"
/**
* binary_tree_insert_left - function that inserts a node as the left-child
* of another node
* @parent: pointer to the parent node of the node to create
* @value: the value to put in the new node
* Return: pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
