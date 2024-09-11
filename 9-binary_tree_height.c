#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: binary tree
 * Return: height or 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t height = 0;
if (!tree)
{
return (height);
}
while (tree->left)
{
height++;
tree = tree->left;
}
return (height);
}
