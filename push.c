#include "monty.h"

/**
 * push - adds a new node at the beginning of the stack.
 * @top: pointer to the head node
 * @n: new value of the new node
 */

void push(stack_t **stack, unsigned int n)
{
  stack_t *new_node;

  new_node = malloc(sizeof(stack_t));
  if (new_node == NULL)
    {
      printf("stack overflow.");
      exit(1);
    }

  new_node->n = n;
  new_node->prev = NULL;
  new_node->next = *top;
  if (*top != NULL)
    (*top)->prev = new_node;
  *top = new_node
}
