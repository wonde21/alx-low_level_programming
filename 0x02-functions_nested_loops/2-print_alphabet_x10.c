#include "main.h"

/**
 * print_alphabet_x10 - 'print alphabets ten times'
 * Return: Always 0
 */

void print_alphabet_x10(void)
{

	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		_putchar('\n');
		i++;
	}
}
