#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: binary tree
 * Return: height or 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;
if (!tree)
{
return (0);
}
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
return (left > right ? left : right);
}
