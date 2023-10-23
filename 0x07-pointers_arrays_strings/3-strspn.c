#include "main.h"

/**
 * _strchr - lochate character in a string
 *
 * @s: char array string
 *
 * @c: char to look for
 *
 * Return: null if char not found, or pointer to first occurrence of char 'c'
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, count;
	count = 0;

	while (s* != '\0')
	{
		if (*s == *accept)
		{
			count++;
		} else
			break;
		s++;
		accept++;
	}
}

