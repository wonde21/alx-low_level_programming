#include <ctype.h>
#include "main.h"

/**
 * int _islower - "Identify the lower than c"
 * Return: Always 0
 */

int _islower(char c){
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
