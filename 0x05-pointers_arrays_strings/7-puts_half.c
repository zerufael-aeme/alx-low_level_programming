#include "main.h"

/**
 * puts_half - This function prints half of a string
 * followed by a newline
 * @str: The string to be evaluated
 */
void puts_half(char *str)
{
	int i;
	int half = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
		half = i / 2;
	else
		half = (i - 1) / 2;
	for (i = half - 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
