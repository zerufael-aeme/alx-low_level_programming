#include "main.h"

/**
 * print_number - This function prints an integer
 * @n: Integer to evaluate
 */

void print_number(int n)
{
    if (n != 0)
    {
        print_number(n / 10);
        putchar((n % 10) + '0');
    }
}
