#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all-sums of all its parameters.
 *@n: number of args
 *
 * Return: sum of all args
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list pa;

	sum = 0;
	va_start (ap, n);

	if (n == 0)
                return (0);

	for (i = 0; i < n;i++)
	{
		sum += va_arg (ap, int);
	}
	va_end (ap);

	return (sum);

}

