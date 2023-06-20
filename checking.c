#include "monty.h"

/**
 * _isdigit - checks if the input a number between 0 and 9
 * @c: the input
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}


/**
 * check_len - returns the number of elements in a linked list
 * @head: head node
 * Return: number of nodes
 */

int check_len(stack_t *head)
{
	if (head == NULL)
		return (0);

	return (1 + check_len(head->next));
}
