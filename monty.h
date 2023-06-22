#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#define _GNU
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

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

/**
 * struct global_variable_s - global variables
 * @file: file pointer
 * @instruction: instruction
 * @stack: pointer to the head node
 * @line_number: line number
 * @stack_mode: stack or queue mode
 * Description: global variables needed in the program
 */
typedef struct global_variable_s
{
	FILE *file;
	char *instruction;
	stack_t *stack;
	int stack_mode;
} global_variable_t;
extern global_variable_t global_var;

int _isdigit(int c);
int check_len(stack_t *head);
void push(stack_t **stack, unsigned int line_number);
void add_begining(stack_t **stack, stack_t *newnode);
void add_end(stack_t **stack, stack_t *newnode);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
/* error_handling.c */
void print_error(int sz, ...);
void free_allocated(void);
void exec_op(char *code, stack_t **stack, unsigned int line_number);
int is_number(char *str);
void print_error_opcode(char *error, char *opcode, unsigned int line_number);
void print_error_line(char *error, unsigned int line_number);

#endif
