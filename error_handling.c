#include "monty.h"
/**
 * print_error - print the error message
 * @sz: the number of arguments
 * @...: the arguments
*/
void print_error(int sz, ...)
{
	va_list error_list;
	char *error;
	int i;

	va_start(error_list, sz);
	for (i = 0; i < sz; i++)
	{
		error = va_arg(error_list, char *);
		fprintf(stderr, "%s", error);
	}
	fprintf(stderr, "\n");
	va_end(error_list);
	free_allocated();
	exit(EXIT_FAILURE);
}
/**
 * print_error_opcode - print the error message
 * @error: the error message
 * @opcode: the opcode
 * @line_number: the line number
*/
void print_error_opcode(char *error, char *opcode, unsigned int *line_number)
{
	fprintf(stderr, "L%u: %s %s\n", *line_number, error, opcode);
	free_allocated();
	exit(EXIT_FAILURE);
}
/**
 * print_error_line - print the error message
 * @error: the error message
 * @line_number: the line number
*/
void print_error_line(char *error, unsigned int *line_number)
{
	fprintf(stderr, "L%u: %s\n", *line_number, error);
	free_allocated();
	exit(EXIT_FAILURE);
}
