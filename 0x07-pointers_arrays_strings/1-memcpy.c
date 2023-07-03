#include "main.h"
/**
 * _memcpy - sets char
 * @dest: char to set
 * @src: char
 * @n: number of bytes to print
 * Return: char destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n; i++)
{
dest[i] = src[i];
}
return (dest);
}
