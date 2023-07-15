#include <stdio.h>
/**
 * main - print all lowercase english alphabet
 * description: 'apply for loop concept'
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar("%C", c);
	}
	return (0);
}

