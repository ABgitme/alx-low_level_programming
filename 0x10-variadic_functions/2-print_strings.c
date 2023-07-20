#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that print strings followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *result;
va_list args;
va_start(args, n);
while (i < n)
{
result = va_arg(args, char*);
if (result == NULL)
	printf("(nil)");
if (separator == NULL)
	continue;
printf("%s", result);
if (i < (n - 1))
{
printf("%s", separator);
}
i++;
}
printf("\n");
va_end(args);
}
