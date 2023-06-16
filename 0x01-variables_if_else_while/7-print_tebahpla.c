#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Display Alphabet'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char s[] = "abcdefghijklmnopqrstuvwxyz";
for (i = 25; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
return (0);
}

