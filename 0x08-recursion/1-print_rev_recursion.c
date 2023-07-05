#incude "main.h"
/**
 * _print_rev_recursion - put function recursion
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
