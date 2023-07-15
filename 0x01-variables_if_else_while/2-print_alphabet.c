#include <stdio.h>
/**
 * main - print all lowercase english alphabet
 * description: 'apply for loop concept'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}

