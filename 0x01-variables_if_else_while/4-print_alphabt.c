#include <stdio.h>
/**
 * main - Entry point
 * description: 'print all lower case character exept q and e'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Lcase;

	for (Lcase = 'a'; Lcase <= 'z'; Lcase++)
	{
		if (Lcase != 'q' && Lcase != 'e')
		{
			putchar(Lcase);
		}
	}
	putchar('\n');
	return (0);
}
