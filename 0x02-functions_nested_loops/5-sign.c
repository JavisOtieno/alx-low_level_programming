#include <stdio.h>
/**
 *print_sign - Entry point
 *@n: number to be checked
 *Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else if (n < 0)
{
printf("-");
return (-1);
}else{
return (-1);
}
}
