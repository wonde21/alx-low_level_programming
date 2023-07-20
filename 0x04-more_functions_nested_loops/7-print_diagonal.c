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
			int i = j;

			while (i < 0)
			{
				_putchar(' ');

				i++;
			}
			j++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
