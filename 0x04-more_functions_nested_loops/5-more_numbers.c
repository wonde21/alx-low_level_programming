#include "main.h"

/**
 * more_numbers - print from 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = '0'; i <= '10'; i++)
	{
		j = '0';

		while (j <= '14')
		{
			_putchar(j);
		}

		_putchar('\n');
	}

}
