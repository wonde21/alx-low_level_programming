#include <ctype.h>
#include "main.h"

/**
 * print_sign - print the sign of num
 * @n: identifyable num
 * Return: 1 if + and 0 if 0 and -1 if -
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43 );
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
