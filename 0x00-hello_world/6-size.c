#include <stdio.h>
/**
 * main - Entry point
 * Description: 'ALX print size of some data type'
 * Return: Always 0 (Seccuss)
 */
int main(void)
{
	int schar[1] = sizeof(char);
	int sint[1] = sizeof(int);
	int slint[1] = sizeof(long int);
	int sllint[1] = sizeof(long long int);
	int sfloat[1] = sizeof(float);

	printf("Size of a char: %d byte(s)\n", &schar);
	printf("Size of an int: %d byte(s)\n", &sint);
	printf("Size of a long int: %d byte(s)\n", &slint);
	printf("Size of a long long int: %d byte(s)\n", &sllint);
	printf("Size of a float: %d byte(s),\n", &sfloat);
	return (0);
}
