#include "shell.h"

/**
 * *_strncpy - Copy a string
 * @dest: Destination string to copy to
 * @src: Source string
 * @n: Amount of characters to copy
 * Return: The concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, m;
	char *s = dest;

	a = 0;
	while (src[a] != '\0' && a < n - 1)
	{
		dest[a] = src[a];
		a++;
	}
	if (a < n)
	{
		m = a;
		while (m < n)
		{
			dest[m] = '\0';
			m++;
		}
	}
	return (s);
}

/**
 * *_strncat - Concatenates two strings
 * @dest: The first string
 * @src: The second string
 * @n: The maximum amount of bytes to be used
 * Return: The concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, m;
	char *s = dest;

	a = 0;
	m = 0;
	while (dest[a] != '\0')
		a++;
	while (src[m] != '\0' && m < n)
	{
		dest[a] = src[m];
		a++;
		m++;
	}
	if (m < n)
		dest[a] = '\0';
	return (s);
}

/**
 * *_strchr - Find a character in a string
 * @s: String to be parsed
 * @c:Character to look for
 * Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

