#include <stdio.h>

/**
 * main - Entry point
 * descripition: 'print from z to a'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Rchar;

	for (Rchar = 'z'; Rchar <= 'a'; Rchar--)
	{
		putchar(Rchar);
	}
	putchar('\n');
	return (0);
}
