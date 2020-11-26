#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node:pointer to the node to find the sibling
 * Return: pointer to sibilng the binary tree
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left && node->parent->left->n == node->n)
		if (node->parent->right)
			return (node->parent->right);
	if (node->parent->right && node->parent->right->n == node->n)
		if (node->parent->left)
			return (node->parent->left);
	return (NULL);
}
