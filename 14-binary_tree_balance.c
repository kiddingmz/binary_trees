#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * 
 * @tree: pointer to the root node of the tree
 *
 * Return: if the tree is NULL, must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree)
	{
		l = (tree->left) ? 1 + binary_tree_height(tree->left) : 1;

		r = (tree->right) ? 1 + binary_tree_height(tree->right) : 1;
		return (l > r ? l : r);
	}
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree:  is a pointer to the root node of the tree to measure the 
 * balance factor
 *
 * Return: If tree is NULL, must return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}
