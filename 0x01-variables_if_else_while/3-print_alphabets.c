#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Display Alphabet'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char s[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (i = 0; i < 52; i++)
{
putchar(s[i]);
}
putchar('\n');
return (0);
}
