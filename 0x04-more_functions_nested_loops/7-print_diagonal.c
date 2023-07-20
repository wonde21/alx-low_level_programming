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
		while (n <= 0)
		{
			_putchar(' ');

			n++;
		}
	}

	_putchar('\n');
}
