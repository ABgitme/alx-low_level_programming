#include "main.h"
int check(char c);
/**
 * cap_string- a function that capitalize
 * @str: char value
 * Return: cap string
 */
char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0)
{
if ((str[i] >= 'a' && str[i] <= 'z'))
str[i] -= 32;
continue;
}
if (check(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
str[i + 1] -= 32;
}
return (str);
}
/**
 * check - Separator characters
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int check(char c)
{
int j = 0;
char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
'"', '(', ')', '{', '}' };
for (; j < 13; j++)
{
if (c == seperators[j])
return (1);
}
return (0);
}
