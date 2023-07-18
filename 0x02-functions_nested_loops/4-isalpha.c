#include <ctype.h>
#include "main.h"

/**
 * _isalpha - cheack the charactor or not
 * @c: a character or number
 * Return: if c is letter 1 else 0
 */

int _isalpha(int c)
{
	return (isalpha(c) ? 1 : 0);
}
