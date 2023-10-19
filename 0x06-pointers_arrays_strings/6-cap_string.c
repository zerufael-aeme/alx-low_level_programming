#include "main.h"

/**
 * cap_string - This function capitalizes all words of a string
 * @s: String to evaluate
 * @ch: used as a temporary placeholder
 * Return: The string converted
 */
char *cap_string(char *s)
{
	int i, ch;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == ';'|| s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				ch = s[i + 1];
			        ch = ch - 32;
			        s[i + 1] = ch;
			}
		}
	}
	return (s);
}

