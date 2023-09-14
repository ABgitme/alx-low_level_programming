#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stddef.h>
/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int result;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		result = va_arg(args, int);
		printf("%d", result);
		if (separator == NULL)
			continue;
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
