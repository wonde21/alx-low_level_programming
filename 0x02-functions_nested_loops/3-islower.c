#include <ctype.h>
#include "main.h"

/**
 * _islower - "Identify the lower than c"
 * @parameterc: parametr character 
 * Return: islower 1 else 0
 */

int _islower(int c)
{
	return (islower(c) ? 1: 0);
}
