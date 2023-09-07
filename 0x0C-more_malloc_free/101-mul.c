#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check_ifdigit(char *s);
void multiply(char *s1, char *s2);
int *allocateArray(int n);
/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *str1;
char *str2;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	str1 = malloc(sizeof(char) * (strlen(argv[1]) + 1));
	if (str1 == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	str2 = malloc(sizeof(char) * (strlen(argv[2]) + 1));
	if (str2 == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	strcpy(str1, argv[1]);
	strcpy(str2, argv[2]);
	if (!check_ifdigit(str1) || !check_ifdigit(str2))
	{
		printf("Error\n");
		free(str1);
		free(str2);
		exit(98);
	}
	multiply(str1, str2);
	return (0);
}

/**
 *  multiply - multiply two string numbers
 * @s1: string value 1
 * @s2: string value 2
 *
 */
void multiply(char *s1, char *s2)
{
int n1, n2, d1, d2, i, j, sum, carry, flag = 0;
int  *result;

	n1 = strlen(s1);
	n2 = strlen(s2);
	/*Dynamically allocate memory for the result array*/
	result = allocateArray(n1 + n2);
	for (i = n1 - 1; i >= 0; i--)
	{
		/* initialize*/
		carry = 0;
		d1 = s1[i] - '0';/* current digit of first number*/
		for (j = n2 - 1; j >= 0; j--)
		{
			d2 = s2[j] - '0'; /*current digit of second number*/
			/*calculate sum*/
			sum = d1 * d2 + result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			/*calculate carry*/
			carry = sum / 10;
		}
		/*Set the carry to the leading digit*/
		result[i] = carry;
	}
	/*discard the leading 0s in result array*/
	for (i = 0; i < (n1 + n2); i++)
	{
		if (result[i])
			flag = 1;
		if (flag)
			printf("%d", result[i]);
	}
	printf("\n");
	free(s1);
	free(s2);
	free(result);
}

/**
 * allocateArray - allocate memory for array
 * @n: size of allocation array
 * Return: created array
 */
int *allocateArray(int n)
{
	int i, *arr;

	arr = (int *)malloc(n * sizeof(int));
	if (arr == NULL)
	{
		printf("Error: Unable to allocate memory.\n");
		return (NULL);
	}
	/*Initialize all elements of the array to 0*/
	for (i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}

/**
 * check_ifdigit - check if array is digit or not
 * @s: array to check
 * Return: 1 if digit,0 otherwise
 */
int check_ifdigit(char *s)
{
	int i;
	int is_digit = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			is_digit = 0;
			break;
		}
	}
	return (is_digit);
}
