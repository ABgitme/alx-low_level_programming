#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: int of the converted string
 */
int _atoi(char *s)
{
int res = 0;
int sign = 1;
int i = 0;
if (s[0] == '-')
{
sign = -1;
i++;
}
for (; s[i] != '\0'; i++)
res = res * 10 + s[i] - '0';

return (res *sign);
}
/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int x, y, mul;
if (argc > 3 || argc < 3)
{
printf("Error\n");
return (1);
}
x = _atoi(argv[1]);
y = _atoi(argv[2]);
mul = x *y;
printf("%d\n", mul);
return (0);
}
