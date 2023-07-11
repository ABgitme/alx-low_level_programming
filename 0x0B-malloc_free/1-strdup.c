#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - check the code for ALX School students.
 * @str: the string to
 * Return: character
 */
char *_strdup(char *str)
{
char *tmp;
char *p;
int len = 0;
if (str == NULL)
return (NULL);
while (str[len])
len++;
tmp = malloc(sizeof(char) * (len + 1));
p = tmp;
if (tmp != NULL)
{
while (*str)
*p++ = *str++;
*p = '\0';
return (tmp);
}
else
return (NULL);
}
