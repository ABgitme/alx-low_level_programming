#include "main.h"
/**
 * print_last_digit - that prints signs
 * @n: value to be checked
 *
 * Return: 1 if n is greater than zero. 0 if n is zero.-1 n is less than zero
 */
int print_last_digit(int n)
{
int i;	
i = n % 10;
if (i < 0)
i *= -1;
_putchar(i + '0');
return (i);
}

