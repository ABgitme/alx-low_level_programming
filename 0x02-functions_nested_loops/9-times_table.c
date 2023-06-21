#include "main.h"
/**
 *times_table - print multiple table
 */
void times_table(void)
{
int i, j, k, lstdig, fstdig;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
if (k > 9)
{
lstdig = k % 10;
fstdig = (k / 10);
_putchar(fstdig + '0');
_putchar(lstdig + '0');
if (j != 9)
{
_putchar(44);
_putchar(32);
}
}
else
{
_putchar(k + '0');
if (j != 9)
{
_putchar(44);
_putchar(32);
}
}
}
_putchar('\n');
}
}
