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
	unsigned int i;
	va_list pa;

	sum = 0;
	va_start(pa, n);


	for (i = 0; i < n;i++)
	{
		sum += va_arg(pa, int);
	}
	va_end(pa);
	return (sum);

}


