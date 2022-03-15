#include <stdio.h>
#include "main.h"
/**
*_abs: Entry point
*Description: find out if absolute
*@n: number on which absolute value is calculated
*Return: absolute value of integer
*/
int _abs(int n)
{
if (n < 0)
{
return (-n);
}
else
{
return n;
}
}
