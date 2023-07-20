#include "main.h"
#include <ctype.h>

/**
 * _isdigit - identify the digit
 * @c: identifyable digit
 * Return: 1 isdigit else 0
 */

int _isdigit(int c)
{
	return (isdigit(c) ? 1 : 0);
}
