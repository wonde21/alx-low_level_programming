#include "main.h"
#include <ctype.h>

/**
 * _isupper - cheack the apper or lower caseness of char
 * @c: int type a char to be cheack
 * Return: 1 if upper 0 if lower
 */

int _isupper(int c)
{
	return (isupper(c) ? 1 : 0);
}
