#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 is binary tree perfect or 0 else failed
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, nds;

	if (!tree)
		return (0);
	height = binary_tree_height(tree);
	nds = binary_tree_size(tree);
	return (powOperacion(2, height + 1) - 1 == nds);
}
/**
 * powOperacion - function to calculate the power of x number y times
 * @variable_x: number
 * @variable_y: number
 * Return: power result
 */
int powOperacion(int variable_x, int variable_y)
{
	if (variable_y < 0)
		return (-1);
	if (variable_y == 0)
		return (1);
	else
		return (variable_x * powOperacion(variable_x, variable_y - 1));
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:pointer to the root node of the tree to measure the height
 * Return: heght the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right += 1 + binary_tree_height(tree->right);
	return (left > right ? left : right);
}
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (!tree)
		return (0);
	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);
	return (size);
}
