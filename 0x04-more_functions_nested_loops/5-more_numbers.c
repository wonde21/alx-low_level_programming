#include "main.h"

/**
 * more_numbers - print from 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int arr[15] = {'0', '1', '2', '3', '4'
		, '5', '6', '7', '8', '9', '0'
			, '1', '2', '3', '4'};

	for (i = 0; i <= 10; i++)
	{
		int n = 0;

		while (arr[n] != '\0')
		{
			if (n > 9)
			{
				_putchar('1');
				_putchar(arr[n]);
			}
			n++;
		}

		_putchar('\n');
	}

}
