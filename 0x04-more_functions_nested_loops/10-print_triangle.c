#include "main.h"

/**
 * print_triangle - print tringle size of size
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
			int j = 1;

			while (n <= size - i)
			{
				_putchar(' ');
				n++;
			}

			while (j <= i)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
		}
	}
	else
	{

		_putchar('\n');
	}
}
