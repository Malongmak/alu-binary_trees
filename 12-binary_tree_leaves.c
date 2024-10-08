#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a binary tree
 * @tree: binary tree node
 * Return: num of leaves or 0 if tree is null
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
if (!tree->left && !tree->right)
{
return (1);
}
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
