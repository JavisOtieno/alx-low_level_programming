#include <stdio.h>
/**
* main - Entry point
* Description : print alphabet in lowercase 10 times
* Return : 0
*/

int main(void)
{
    int i=0;
    while(i<10){

    for(int n=97; n<=122; n++){
        printf("%c",n);
    }
    printf("\n");

    i++;

    }

}
