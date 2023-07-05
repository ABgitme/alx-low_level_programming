#include "main.h"
int check(char *s, int left, int right);
/**
 * is_palindrome - Afunction that checks if a string is a palindrome
 * @s: an input string
 * Return: 1 if n is palindrome or  0 in otherwise
 */
int is_palindrome(char *s)
{
int len = strlen(s);
if (len == 0 || len == 1)
return (1);
return (check(s, 0, len - 1));
}
/**
 * check - check palindrome
 * @s: char to check
 * @left: left index
 * @right: right index
 * Return: 1 if n is palindrome or  0 in otherwise
 */
int check(char *s, int left, int right)
{
if (left >= right)
return (1);
else if (s[left] == s[right])
return (check(s, left + 1, right - 1));
else
return (0);
}
