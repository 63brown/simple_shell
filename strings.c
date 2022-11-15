#include "simple_shell.h"

/**
 * _strcmp - compares 2 strings
 *
 * @s1: string 1 to be compared to s2
 * @s2: string 2 to be compared to s1
 *
 * Return: 0 if s1 & s2 are equal, -ve value if s1<s2, +ve if s1>s2
 */
int _strcmp(const char *s1, const char *s2)
{
	const char *r = s1, *l = s2;
	int res = 0;

	for (; *r || *l; r++, l++)
	{
		res = *r - *l;
		if (res != 0)
			return (res);
	}
	return (res);
}

/**
 * _strlen - returns length of a string
 *
 * @s: character
 *
 * Return: Always (0)success
 */
int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * _strcpy - check the code.
 * @dest: a pointer to destination of string.
 * @src: a pointer to source string to copy from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while
		((*dest++ = *src++));
	return (c);
}
/**
 * _strcat - appends src string to the dest
 *
 * @dest: destination character
 * @src: source characters
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: an input pointer of the string to copy.
 * Return: a pointer to new string or NULL if it str is NULL
 */
char *_strdup(const char *str)
{
	char *cpy;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);
	cpy = malloc(size + 1 * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		cpy[i] = str[i];
	return (cpy);
}
