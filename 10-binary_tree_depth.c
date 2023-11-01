#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tre
 *
 * @tree: pointer
 *
 * Return: size_t or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
