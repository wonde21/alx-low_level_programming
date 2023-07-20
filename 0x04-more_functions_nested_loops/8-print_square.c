#include "main.h"

/**
 * print_square - print n squer
 * @size: size of squer
 * Return: void
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < size)
			{
			_putchar('#');
			j++;

			}

			i++;
	}
	_putchar('\n');
}
