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
