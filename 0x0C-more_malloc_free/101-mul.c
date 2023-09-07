#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check_ifdigit(char *s);
long int _atoi(char *s);
/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: int of the converted string
 */
long int _atoi(char *s)
{
long int res = 0;
long int sign = 1;
long int i = 0;
if (s[0] == '-')
{
sign = -1;
i++;
}
for (; s[i] != '\0'; i++)
res = res * 10 + s[i] - '0';

return (res * sign);
}
/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
/*long int x;*/ 
/*int i;*/
char *str1;
char *str2;

if (argc > 3 || argc < 3)
{
printf("Error\n");
exit(98);
}
str1 = malloc(sizeof(char) * strlen(argv[1] + 1));
if (str1 == NULL)
{
printf("Error\n");
exit(98);
}
str2 = malloc(sizeof(char) * strlen(argv[2] + 1));
if (str2 == NULL)
{
printf("Error\n");
exit(98);
}
strcpy(str1, argv[1]);
strcpy(str2, argv[2]);

if (!check_ifdigit(str1) || !check_ifdigit(str2))
{
printf("Error\n");
free(str1);
free(str2);
exit(98);
}


return (0);
}






int check_ifdigit(char *s)
{
int i;
int is_digit = 1;

for (i = 0; s[i] != '\0'; i++)
{
if (!isdigit(s[i]))
{
is_digit = 0;
break;
}
}
return (is_digit); 
}
