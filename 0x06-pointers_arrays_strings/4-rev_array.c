#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of
 * integers
 * @a: The array of integers to reverse
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int tmp[n];

	for (i = 0; i < n; i++)
	{
		tmp[i] = a[n - i - 1];
	}
	for (j = 0; j < n; j++)
	{
		a[j] = tmp[j];
	}
}
