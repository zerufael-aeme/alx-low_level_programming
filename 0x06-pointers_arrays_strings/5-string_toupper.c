#include "main.h"

/**
 * *string_toupper - This function changes all lowercase characters
 * of a string to uppercase
 * @s: The string it's evaluating
 * Return: An all uppercase string
 */
char *string_toupper(char *s)
{
	int i, ch;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 'a' && s[i])
		{
			ch = s[i];
			ch = ch - 32;
			s[i] = ch;
		}
	}
	return (s);
}

