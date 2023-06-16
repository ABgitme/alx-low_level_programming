#include <stdio.h>
/**
 *print_alfabet - This is a function to return Alphabet letters
 *@s: alphabet value.
 */
void print_alfabet(char *s);
/**
 * main - Entry point
 * Description: 'Display Alphabet'
 * Return: Always 0 (Success)
 */
int main(void)
{
char s[] = "abcdefghijklmnopqrstuvwxyz";
print_alfabet(s);
putchar ('\n');
return (0);
}
/**
 *print_alfabet - This is a function to return Alphabet letters
 *@s: alphabet value
 */
void print_alfabet(char *s)
{
int i;
for (i = 0; i < 26; i++)
{
putchar(s[i]);
}
}
