#include <stdio.h>
/**
 * main - Entry point
 * Description: 'all single digit numbers of base 10'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
for (i = 0; i < 10; i++)
{
printf("%u", j[i]);
}
putchar('\n');
return (0);
}
