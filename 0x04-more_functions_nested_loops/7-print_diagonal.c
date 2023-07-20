#include "main.h"

/**
 * print_diagonal - print an n times space
 * @n: number of space
 * Return: void
 */

void print_diagonal(int n)
{

	if (n > 0)
	{
		int j = 0;

		while (j < n)
		{
			int i = 0;

			while (i < j)
			{
				_putchar(' ');

				i++;
			}
			j++;
			_putchar(92);

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
