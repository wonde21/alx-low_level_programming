#include <stdio.h>

/**
 * main - Entry point
 * descripition: 'print from 0 to 9 as char'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Nchar;

	for (Nchar = '0'; Nchar <= '9'; Nchar++)
	{
		putchar(Nchar);
	}
	putchar('\n');
	return (0);
}
