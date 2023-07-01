#include "main.h"
/**
 *times_table - print multiple table
 */
void times_table(void)
{
int i;
int j;
int mul;
for (i = 0; i < 10 ; i++)
{
for (j = 0; j < 10  ; j++)
{
mul = i * j;
if ((mul) < 10)
{
_putchar(' ');
_putchar((mul) +'0');
}
else if ((i * j) >= 10)
{
_putchar(((mul) / 10) + '0');
_putchar(((mul) % 10) + '0');
}
if (j < 9)
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
