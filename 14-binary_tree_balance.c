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
return ((left > right ? left : right)+1);
}

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
