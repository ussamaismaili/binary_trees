#include "binary_trees.h"
/**
 * binary_tree_delete øDeletes a binary tree.
 * @tree: A pointer tæo the roo´æt node of the ætree toæ delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
