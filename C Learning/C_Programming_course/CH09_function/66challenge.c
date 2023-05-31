#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// the function of finding the greatest common devisor
int gcd (int x, int y)
{
    int temp;

    if (x>y)
    {
        // x is divisible by y
        if (x % y == 0){
            return y;
        }
        // x is not divisible by y
        else {
            x = x % y;
            gcd (x,y);
        }
    }

    // always make x larger than y
    else if (y>x)
    {
        temp = y;
        y = x;
        x = temp;
        gcd (x,y);
    }

    // if x == y, then any of them is gcd
    else {
        return x;
    }
}

// function of finding absolute value
float absoluteValue (float a)
{
    if (a>0){
        return a;
    }
    else {
        return a*(-1.0);
    }
}

// function of computing the square root of a number
int squareRoot(int z)
{
    ;
}

// Main Function
int main(void)
{
    // gcd part
    int gcd1;
    int gcd2;

    printf("\nPlease insert two non-negative integers (with a space between) and I will give you the gcd of them: ");
    scanf("%d %d", &gcd1, &gcd2);

    int result = gcd (gcd1,gcd2);
    printf("\nThe gcd of %d and %d is %d.\n\n", gcd1, gcd2, result);

    // absolute number part
    float testnumber;
    printf("\nPlease give a number and I will give you the absolute number: ");
    scanf("%f", &testnumber);

    float abs = absoluteValue(testnumber);

    printf("\nThe absolute value of %.2f is %.2f. \n\n", testnumber, abs);

    return 0;

}