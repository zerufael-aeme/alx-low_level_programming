#include "main.h"

/**
 * rot13 - This function encodes a string using rot13
 * @s: String to evaluate
 * Return: Converted string
 */

char *rot13(char *s)
{
	int i, j;
	char base[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; base[j] != 0; j++)
		{
			if (s[i] == base[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
