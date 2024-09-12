#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of binary tree
 * @tree: root node of tree
 * Return: 0 if tree is null else balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int left, right;
if (!tree)
{
return (0);
}
left = tree->left ? (int)binary_tree_height(tree->left) : 0;
right = tree->right ? (int)binary_tree_height(tree->right) : 0;
return (left - right);
}
