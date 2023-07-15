#include <stdio.h>

/**
 * main - Entry point
 * description: ' print all combination of single digit and separated by comma
 * Return: Always 0 (Succuss)
 */

int main(void)
{
	char Snum;

	for (Snum = '0'; Snum <= '9'; Snum++)
	{
		putchar(Snum);
		if (Snum != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
