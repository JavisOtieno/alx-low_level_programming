#include <stdio.h>
/**
*_islower - Entry Point
*Description: function to check if letter is lower
*int c: letter to be checked 
*Return : 0
*/
int _islower(int c)
{
if (c <= 65 || c >= 97)
return (1);
else
return (0);
}

