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
	int i, tmp;

	tmp = n;

	for (i = 0; i < tmp; i++)
	{
		s[i] = b;
	}
	return (s);
}

