#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int primeNumber[100] = {2,3};
    int number[100];
    int isprime[100];

    int i=0;
    int j=0;
    int k=2;
    int pass=0;

    for (i=0 ; i < 97 ; i++)
    {
        number[i]=i+4;
        for (j=2 ; j*j <= number [i] ; j++)
        {
            if (number[i] % j == 0) {
                pass = 0;
                break;
            }
            else{
                pass = 1;
            }
        }

        if (pass == 1){
            isprime[i]=1;
        }
        else{
            isprime[i]=0;
        }
    }

    for (i=3 ; i<97 ; i++){

        if(isprime[i-3] == 1){
            primeNumber[k] = number[i-3];
            k = k + 1;
        }
        else{
            ;
        }
    }

    for (i=0 ; i<97 ; i++)
    {
        if (primeNumber[i] != 0){
            printf("%d ", primeNumber[i]);
        }
        else{
            ;
        }
    }

    return 0;

}