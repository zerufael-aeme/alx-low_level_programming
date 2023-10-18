#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of
 * integers
 * @a: The array of integers to reverse
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != 0; i++)
	{
		a[i] = a[n - 1];
		n--;
	}
}
