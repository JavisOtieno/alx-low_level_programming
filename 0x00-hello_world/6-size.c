#include <stdio.h>

/**
 * main - Entry point
 * Description : print size of types
 * Return: 0
 */

int main(void){

	char charType;
	int intType;
	long longType;
	long long longLongType;
	Float floatType;


	printf("Size of a char: %zu byte(s)",sizeof(charType));
	printf("Size of an int: %zu  byte(s)",sizeof(intType));
	printf("Size of a long int: %zu byte(s)",sizeof(longType));
	printf("Size of a long long int: %zu  byte(s)",sizeof(longLongType));
	printf("Size of a float: %zu byte(s)",sizeof(floatType));

	return(0);

}
