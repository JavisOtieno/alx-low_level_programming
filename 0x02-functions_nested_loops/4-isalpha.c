#include <stdio.h>
/**
 * _isalpha - Entry point
 * @c: character to be checked
 * Return: 1 if alphabet 0 if otherwise
 */
 int _isalpha (int c)
{
if (c >= 65 && c <= 90 || c >= 97 && c <= 122 )
return (1);
else
return (0);
}

