#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory with constant byte
 * @n: first bytes
 * @s: pointer to n bytes
 *@b: bytes to be filled
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		n--;
		if (n < 0)
		{
			break;
		}else
		{
			s[n] = b;
		}
	}
	return (s);
}
