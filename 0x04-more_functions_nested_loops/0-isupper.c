#include "main.h"
#include <ctype.h>

/**
 * int _isupper - cheack the apper or lower caseness of char
 * @n: a char to be cheack
 * Return: 1 if upper 0 if lowwer
 */

int _isupper(int c)
{
	return (isupper(c) ? 1 : 0);
}
