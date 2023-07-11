#include <stdlib.h>
int word_size(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_size - locating end of words in a string
 * @str: searched string
 * Return: end index
 */
int word_size(char *str)
{
int index = 0, len = 0;
while (*(str + index) && *(str + index) != ' ')
{
len++;
index++;
}
return (len);
}
/**
 * count_words - words in a string count
 * @str: searched string
 * Return: word index
 */
int count_words(char *str)
{
int index = 0, words = 0, len = 0;
for (index = 0; *(str + index); ++index)
len++;
for (index = 0; index < len; ++index)
{
if (*(str + index) != ' ')
{
words++;
index += word_size(str + index);
}
}
return (words);
}
/**
 * strtow - A function that splits a string into words
 * @str: An input pointer of the string to split
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char **strtow(char *str)
{
char **result;
int index = 0, words, w, letters, l;
if (str == NULL || *str == '\0')
return (NULL);
words = count_words(str);
if (words == 0)
return (NULL);
result = malloc(sizeof(char *) * (words + 1));
if (result == NULL)
return (NULL);
for (w = 0; w < words; ++w)
{
while (str[index] == ' ')
index++;
letters = word_size(str + index);
result[w] = malloc(sizeof(char) * (letters + 1));
if (result[w] == NULL)
{
for (; w >= 0; w--)
free(result[w]);
free(result);
return (NULL);
}
for (l = 0; l < letters; l++)
result[w][l] = str[index++];
result[w][l] = '\0';
}
result[w] = NULL;
return (result);
}

