#include <stdio.h>
/**
* main - Entry point
* Description:  print alphabet in lowercase 10 times
* Returns nothing
*/

void print_alphabet_x10(void)
{
int i=0;
while(i<10)
{
int n = 97;
while(n <= 122){
printf("%c", n);
n++;
}
printf("\n");
i++;
}
}
