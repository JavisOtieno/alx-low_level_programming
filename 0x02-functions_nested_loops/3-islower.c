#include <stdio.h>
/**
*_islower - Entry Point
*Description: function to check if letter is lower
*@c: letter to be checked
*Return: 1 if lower and 0 otherwise
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}

