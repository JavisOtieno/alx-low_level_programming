#include <stdio.h>

int main(void){

    unsigned int factorial(unsigned int n){

    if(n<=1){
        return 1;
    }else{
        return n*factorial(n-1);
    }

    }

printf("%d, this sucks",factorial(10));

return(0);

}
