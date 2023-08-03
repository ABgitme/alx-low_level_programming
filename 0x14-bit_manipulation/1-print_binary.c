#include "main.h"

/**
 * _log2 - function to convert int to base 2
 * @x : int value to convert
 * return: base 2 value
 */
unsigned int _log2(unsigned int x)
{
	unsigned int val = 0;

	while (x >>= 1)
		val++;
	return (val);
}

/**
 * print_binary - function to convert int to binary
 * @n : int value to convert
 */
void print_binary(unsigned long int n)
{
	int len;

	len = ((int)_log2(n) + 1) - 1;
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for ( ; len >= 0; len--)
		{
			_putchar('0' + ((n >> len) & 1));
		}
	}
}
