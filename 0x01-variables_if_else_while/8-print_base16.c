#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Display Alphabet'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
putchar(48 + i);
for (j = 'a'; j <= 'f'; j++)
putchar(j);
putchar('\n');
return (0);
}
