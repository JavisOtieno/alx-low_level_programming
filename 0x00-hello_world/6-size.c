#include <stdio.h>

/**
 * main - Entry point
 * Description : print size of types
 * Return: 0
 */
int main(void)
{
	char charType;
	int intType;
	long longType;
	long long longLongType;
	float floatType;


	printf("Size of a char: %i byte(s)\n", sizeof(charType));
	printf("Size of an int: %i byte(s)\n", sizeof(intType));
	printf("Size of a long int: %i byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %i byte(s)\n", sizeof(longLongType));
	printf("Size of a float: %i byte(s)\n", sizeof(floatType));

	return (0);

}
