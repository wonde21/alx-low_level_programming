#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry Point
* Description:'ALX conditional clause in c'
* Printf - print the condition of n
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	/*get random num*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* first cheeck n is gerater than 0 */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	/*second cheeck n is equal to 0 */
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	/* finally return 'is negative' */
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
