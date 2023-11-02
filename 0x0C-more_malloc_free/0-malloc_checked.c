#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory
 * @b: size of memory
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *alloc = NULL;

	alloc = malloc(b);
	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
