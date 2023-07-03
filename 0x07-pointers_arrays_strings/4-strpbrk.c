#include "main.h"
/**
 * _strpbrk - sets char
 * @s: char to set
 * @accept: char
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
if (s == NULL || accept == NULL)
{
return (NULL);
}
char *tmp;
while (*s != '\0')
{
tmp = accept;
while (*tmp != '\0')
{
if (*s == *tmp)
{
return (s);
}
tmp++;
}
s++;
}
return (NULL);
}
