#include "main.h"
/**
 * print_alphabet - print alphabets
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
