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
if(n < 0)
{
n = -n;
}
int last_digit;
last_digit = n%10;
_putchar(last_digit + '0');
return last_digit;
}

