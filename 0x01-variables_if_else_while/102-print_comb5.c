#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 * description: 'print the combination of two two digit number'
 * Return: Always 0 (Success
 */

int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;
	bool first_cheaker = true;

	for ( num1 = '0'; num1 <= '9'; num1++)
	{
		for ( num2 = '0'; num2 <= '9'; num2++)
		{
			for ( num3 = num1; num3 <= '9'; num3++)
			{
				for ( num4 = num2 + 1; num4 <= '9'; num4++)
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
					putchar(' ');
					putchar(num3);
					putchar(num4);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
