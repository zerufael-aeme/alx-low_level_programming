#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	} else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		return (result);
	}

}
