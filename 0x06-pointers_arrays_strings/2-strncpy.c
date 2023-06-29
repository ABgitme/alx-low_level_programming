#include "main.h"
/**
 * _strncpy- a function that rotates a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
int srcsize = 0;
int i = 0;
char *tmp = dest;
char *begin = src;
while (*src)
{
srcsize++;
src++;
}
srcsize++;
if (n > srcsize)
n = srcsize;
src = begin;
for (; i < n; i++)
*dest++ = *src++;
return (tmp);
}

