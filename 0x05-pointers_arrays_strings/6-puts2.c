#include "main.h"

/**
 * puts2 - This function prints one char out of 2 of a string
 * followed by a newline
 * @str: The string to be evaluated
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
