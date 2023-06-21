#include "main.h"

/**
 * print_times_table - prints times table for numbers from 0-14
 * @n: An input integer value
 * Return: Nothing
 */
void print_times_table(int n)
{
int i, j, mul;
if (n > 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
mul = i * j;
if (mul <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(mul + '0');
}
else if (mul > 9 && mul <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(mul / 10 + '0');
_putchar(mul % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(mul / 100 + '0');
_putchar(mul / 10 % 10 + '0');
_putchar(mul % 10 + '0');
}
_putchar('\n');
}
}
}
}
