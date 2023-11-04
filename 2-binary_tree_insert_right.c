#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert a node as the right-child
 *                            of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the newt node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the newt node.
 *
 * Description: If parent already has right-child, the newt node
 *              takess its place and the old right-child is set as
 *              the right-child of the newt node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newt;

	if (parent == NULL)
		return (NULL);

	newt = binary_tree_node(parent, value);
	if (newt == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newt->right = parent->right;
		parent->right->parent = newt;
	}
	parent->right = newt;

	return (newt);
}
