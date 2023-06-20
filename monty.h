#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct global_variable_s
{
	FILE *file;
	char *instruction, *op_code;
	stack_t *stack;
	unsigned int line_number;
} global_variable_t;
extern global_variable_t global_var;

int _isdigit(int c);
void push(stack_t **stack, unsigned int n);
void pall(stack_t **stack, unsigned int line_number);

/* error_handling.c */
void print_error(int sz, ...);
void free_allocated(void);
#endif
