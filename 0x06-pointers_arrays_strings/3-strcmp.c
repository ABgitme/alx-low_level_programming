#include "main.h"
/**
 * _strcmp- a function that copies the string pointed to by src,
 * @s1: the string value1
 * @s2: the string value2
 * Return: 0 if equal, -15 if not and s1 is less than s2
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
if (s1[i] == s2[i])
{
return (0);
break;
}
else if (s1[i] < s2[i])
{
return (-15);
break;
}
else
break;
}
return (15);
}
