#include "main.h"
/**
 * string_toupper- a function that capitalize
 * @c: char value
 * Return: uppercase
 */
char *string_toupper(char *c)
{
int i;
for (i = 0; c[i] != '\0'; i++)
{
if (c[i] >= 'a' && c[i] <= 'z')
c[i] -= 32;
}
return (c);
}
