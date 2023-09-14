#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int result = 0;
va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	while (i < n)
	{
		result += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (result);
}
