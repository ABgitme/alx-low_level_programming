#include "main.h"
/**
 * main - Entry point
 * Description: 'Display Alphabet'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int i = 0;
char s[] = "abcdefghijklmnopqrstuvwxyz";
while (i < 26)
{
_putchar(s[i]);
 ++i;
}
_putchar('\n');
}
