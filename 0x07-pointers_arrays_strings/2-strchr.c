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

char *_strchr(char *s, char c)
{
	int i;
	char found;
	char *ch;
	found = '\0';
	ch = &found;
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			found = s[i];
			break;
		}
	}
	return (ch);
}

