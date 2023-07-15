#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry Point
* Description:'ALX conditional clause in c'
* Return - if n is gearter thabn 1 Always iccuss)
* Return - Always 0 (Success)
*/

int main(void)
{
	int n;
	/*get random num*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* first check n is gerater than 0 */
	if (n > 0)
	{
	return ("is positive");
	}
	/*second check n is equal to 0 */
	else if (n == 0)
	{
	return ("is zero");
	}
	/* finally returnr 'is negative' */
	else {
	return ("is negative");
	}
}
