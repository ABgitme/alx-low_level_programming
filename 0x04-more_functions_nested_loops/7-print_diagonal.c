#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @x: An input integer
 * Return: Always 0
 */
void print_diagonal(int x)
{
int i, j;
if (x > 0)
{
for (i = 0; i < x; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
else
_putchar('\n');
}
