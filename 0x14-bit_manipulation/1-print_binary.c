#include "main.h"

/**
 * print_binary - function to convert int to binary
 * @n : int value to convert
 */
void print_binary(unsigned long int n) {
   	unsigned int flag = 0, max = 32768; /* 1000 0000 0000 0000 */

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (flag == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		max >>= 1;
	}
}
