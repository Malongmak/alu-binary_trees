#include "binary_trees.h"

/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree: binary tree
 * Return: height or 0 if tree is null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t left, right;
if (!tree || (!tree->right && !tree->left))
{
return (0);
}
left = binary_tree_depth(tree->left);
right = binary_tree_depth(tree->right);
return ((left > right ? left : right)+1);
}
