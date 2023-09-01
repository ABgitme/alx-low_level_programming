#include "main.h"
#include <stdio.h>
#include <ctype.h>
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
 * main - A proogram that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: The arguements' counter
 * @argv: The argument's values
 * Return: 1 if the number of arguments passed is not exactly
 * or 0 in otherwise
 */
int main(int argc, char **argv)
{
int amount, coins = 0;
if (argc == 2)
{
amount = _atoi(argv[1]);
if (amount < 0)
{
printf("%d\n", 0);
return (0);
}
if (amount % 25 >= 0)
{
coins += amount / 25;
amount = amount % 25;
}
if (amount % 10 >= 0)
{
coins += amount / 10;
amount = amount % 10;
}
if (amount % 5 >= 0)
{
coins += amount / 5;
amount = amount % 5;
}
if (amount % 2 >= 0)
{
coins += amount / 2;
amount = amount % 2;
}
if (amount % 1 >= 0)
coins += amount;
printf("%d\n", coins);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
