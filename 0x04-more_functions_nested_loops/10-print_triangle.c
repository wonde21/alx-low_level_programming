#include "main.h"

/**
 * print_triangle - print tringle with #
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			int n = 1;

			while (n <= size - i)
			{
				_putchar(' ');
			}

			int j = 1;

			while (j <= i)
			{
				_putchar('#');
			}
		}
	}
	_putchar('\n');

}
