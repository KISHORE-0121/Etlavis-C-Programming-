//Write a program to get a number from user and interchange the first and last digits and print the result.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, tem, c = 0, first, last, middle, rev;

    scanf("%d", &a);

    tem = a;
    while (tem != 0)
    {
        c++;
        tem = tem / 10;
    }
    int p =(int)round(pow(10, c - 1));

    last = a % 10;
    first = a / p;
    middle = (a % p) / 10;

    rev = last * p + middle * 10 + first;

    printf("%d", rev);

    return 0;
}