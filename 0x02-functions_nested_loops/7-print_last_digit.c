#include <stdio.h>
#include "main.h"
/**
*print_last_digit - Entry point
*Description: find out last digit
*@n: number on which last digit is obtained
*Return: last digit of number
*/
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
n = -n;
}
last_digit = n % 10;
if (last_digit < 0)
last_digit = -last_digit;
_putchar (last_digit + '0');
return (last_digit);
}

