#include "main.h"

/**
 * print_last_digit - print the last digit of the n
 * @n: int num
 * Return: return the last digit
 */

int print_last_digit(int n)
{

	int p = ((n / 10) * 10);
	int last = n - p;

	return (last);
}
