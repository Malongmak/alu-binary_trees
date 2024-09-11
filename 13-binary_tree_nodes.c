#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: binary tree node
 * Return: num of node with at least 1 node or 0 if tree is null
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (!tree || (!tree->left && !tree->right))
{
return (0);
}
return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 2);
}
