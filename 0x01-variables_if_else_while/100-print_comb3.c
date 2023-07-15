#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 * description: 'print all possible combination of two digit number'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;
	bool first_cheaker = true;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++)
		{
			if (first_cheaker)
			{
				first_cheaker = false;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			putchar(num1);
			putchar(num2);
		}
	}
	putchar('\n');
	return (0);
}
