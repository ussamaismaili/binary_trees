#include "binary_trees.h"
/*
 * binary_tree_preorder - Traverses a binary tree using the pre-order method.
 * @tree: A pointer to the root node of the tree to be traversed.
 * @func: A pointer to a function that is called for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
