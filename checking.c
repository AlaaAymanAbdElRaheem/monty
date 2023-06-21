#include "monty.h"

/**
 * is_number - check if a given string is a number
 * @str: string to check
 * Return: 1 if true, 0 if false
*/
int is_number(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	if (str[0] == '-')
		i++;
	for (; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
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
