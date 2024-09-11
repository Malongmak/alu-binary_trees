#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: binary tree
 * Return: height or 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
size_t left = binary_tree_height(tree->left);
size_t right = binary_tree_height(tree->right);
return ((left > right ? left : right) + 1);
}
