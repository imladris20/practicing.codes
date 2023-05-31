#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){

    int p = 5;
    int i = 0;
    int primeNumber[100];
    int primeIndex = 2;
    bool isprime;

    primeNumber[0]=2;
    primeNumber[1]=3;

    for (p=5 ; p<=100 ; p=p+2)
    {
        isprime = true;

        for ( i=1 ; isprime==true && p / primeNumber[i] >= primeNumber[i] ; i++)
        {
            if (p % primeNumber[i] == 0){
                isprime = false;
            }
        }
        if (isprime == true){
            primeNumber[primeIndex] = p;
            primeIndex = primeIndex + 1;
        }
    }

    for ( i=0 ; i<primeIndex ; i++){
        printf("%d\n", primeNumber[i]);
    }

    return 0;

} 