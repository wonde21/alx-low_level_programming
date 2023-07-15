#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * description: 'to print upper case and lower alphabet'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
		putchar(toupper(character));
		putchar('\n');
	}
	return (0);
}
