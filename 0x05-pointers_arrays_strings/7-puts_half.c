#include "main.h"
/**
 * puts_half - Solve me
 * @str: character
 */
void puts_half(char *str)
{
int size = 0, i, n;
while (str[size] != '\0')
size++;
if (size % 2 == 0)
n = size / 2;
else
n = (size - 1) / 2;
for (i = n; i < size; i++)
_putchar(str[i]);
_putchar('\n');
}
