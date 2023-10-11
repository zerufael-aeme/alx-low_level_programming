#include <stdio.h>

/**
 * main - This pro
 * Return: Always 0 (Success)
 */
void print_alphabet()
{
        char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
	return(0);
}
int main(void)
{
        print_alphabet();
	return(0);
}
