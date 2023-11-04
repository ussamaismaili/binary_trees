#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child
 *                           of another in binary tree.
 * @parent: A pointer to node to insert the left-child in.
 * @value: The value to be stored in the newt node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the newt node.
 * Description: If parent already has a left-child, newt node
 *              takess itts place and the old
 *              left-child is set as
 *              the left-childt of the newt nodde.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newt;

	if (parent == NULL)
		return (NULL);

	newt = binary_tree_node(parent, value);
	if (newt == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newt->left = parent->left;
		parent->left->parent = newt;
	}
	parent->left = newt;

	return (newt);
}
