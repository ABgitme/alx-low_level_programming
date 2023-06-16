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
for (i = 0; i < 26; i++)
{
while (i == 4 || i == 16)
{
i += 1;
}
putchar(s[i]);
}
putchar('\n');
return (0);
}

