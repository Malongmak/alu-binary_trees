#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in binary tree
 * @tree: binary tree
 * Return: depth or 0 if tree is null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth;
if (!tree || !tree->parent)
{
return (0);
}
depth = binary_tree_depth(tree->parent);
return (depth+1);
}
