#include <stdio.h>
#include "main.h"
/**
*_abs - Entry point
*Description: find out last digit
*@n: number on which last digit is obtained
*Return: last digit of number
*/
int print_last_digit(int n)
{
int last_digit=n%10;
return last_digit;
printf("%d",last_digit);
}

