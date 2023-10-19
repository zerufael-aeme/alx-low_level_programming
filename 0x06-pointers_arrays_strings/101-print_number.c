#include "main.h"

/**
 * print_number - prints a number in reverse order
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
    if (n != 0)
    {
        print_number(n / 10);
        putchar((n % 10) + '0');
    }
}
