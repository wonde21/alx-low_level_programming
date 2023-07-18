#include <ctype.h>
#include "main.h"

/**
 * print_sign - print the sign of num
 * @n: identifyable num
 * Return: 1 if + and 0 if 0 and -1 if -
 */

int print_sign(int n)
{
	int pos = +;
	int zero = 0;
	int negative = -;

	if (n > 0)
	{
		_putchar(char(pos));
		return (1);
	}
	else if (n == 0)
	{
		_putchar(char(zero));
		return (0);
	}
	else
	{
		_putchar(char(negative));
		return ("-1");
	}
}
