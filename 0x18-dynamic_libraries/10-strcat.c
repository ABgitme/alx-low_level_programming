#include "main.h"
/**
 * _strcat - a function that copies the string pointed to by src,
 * @dest: the string to concatenate
 * @src: the string from concatenate
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
    int i;
    int j;
    for (i = 0; dest[i] != '\0'; i++)
    {
    }
    for (j = 0; src[j] != '\0'; j++, i++)
    {
        dest[i] = src[j];
    }
    dest[i] = '\0';
    return (dest);
}