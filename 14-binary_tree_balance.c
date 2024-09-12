#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of binary tree
 * @tree: root node of tree
 * Return: 0 if tree is null else balance factor
 */

int binary_tree_balance(const binary_tree *tree)
{
int left, right;
if (!tree)
{
return (0);
}
left = binary_tree_balance(tree->left) + 1;
right = binary_tree_balance(tree->right) + 1;
return (left - right);
}
