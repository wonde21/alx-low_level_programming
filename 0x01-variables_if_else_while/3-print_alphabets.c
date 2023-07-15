#include <stdio.h>

/**
 * main - Entry point
 * description: 'to print upper case and lower alphabet'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Lcase;
	char Ucase;

	for (Lcase = 'a'; Lcase <= 'z'; Lcase++)
	{
		putchar(Lcase);
	}
	for (Ucase = 'A' Ucase <= 'Z'; Ucase++)
	{
		putchar(Ucase);
	}
	Putchar('\n');

	return (0);
}
