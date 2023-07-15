#include <stdio.h>

/**
 * main - Entry point
 * description: 'print a number fron 0 to 9'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
