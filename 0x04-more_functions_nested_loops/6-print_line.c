#include <main.h>

/**
 * print_line - print parameter times line
 * @n: nember of line
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
