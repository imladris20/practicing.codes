#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//always declaring the function first!!
int gcd (int x, int y);
float absoluteValue (float z);
float squareRoot (float w);

int main(void)
{
    // declaring variables
    int gcd1;
    int gcd2;
    int resultGcd;
    float abs;
    float resultAbs;
    float sqr;
    float resultSqr;

    // gcd part
    printf("\nPlease insert two non-negative integers (with a space between) and I will give you the gcd of them: ");
    scanf("%d %d", &gcd1, &gcd2);

    resultGcd = gcd (gcd1,gcd2);
    printf("\nThe gcd of %d and %d is %d.\n\n", gcd1, gcd2, resultGcd);

    // absolute value part
    printf("\nPlease insert any number and I will give you the absolute value of it: ");
    scanf("%f", &abs);

    resultAbs = absoluteValue(abs);
    printf("\nThe absolute value of %.4f is %.4f.\n\n", abs, resultAbs);

    // square root part
    printf("\nPlease insert any number and I will give you the square root of it: ");
    scanf("%f", &sqr);

    resultSqr = squareRoot(sqr);
    printf("\nThe square root of %f is close to %.3f.\n\n", sqr, resultSqr);

    return 0;

}

// the function of finding the greatest common devisor
int gcd (int x, int y)
{
    int temp;
    while ( y!= 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

// the function of absolute value
float absoluteValue (float z)
{
    if (z<0){
        z = z * (-1.0);
    }
    return z;
}

// the function of square root
float squareRoot (float w)
{
    const float epsilon = .00001;
    float guess = 1.0;
    float returnValue = 0.0;

    if ( w < 0)
    {
        printf ("Negative argument to squareRoot.\n\n");
        returnValue = -1.0;
    }

    if (returnValue != -1.0)
    {
        while (absoluteValue (guess * guess - w) >= epsilon )
        {
            guess = ( w / guess+guess) / 2.0 ;
        }
        returnValue = guess;
    }

    return returnValue;
}
