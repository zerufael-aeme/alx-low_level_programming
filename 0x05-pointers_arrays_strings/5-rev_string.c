#include "main.h"

/**
 * rev_string - This function reverses a string
 * @s: The character array / string to reverse
 */
void rev_string(char *s)
{
int i,j;
char ch;

j = 0;

for (i = 0; s[i] != '\0'; i++)
	;
for (i--; j < i; i--)
{
ch = s[i];
s[i] = s[j];
s[j] = ch;
j++;
}	
}
