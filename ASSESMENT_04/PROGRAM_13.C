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

    last = a % 10;
    first = a / (int)pow(10, c - 1);
    middle = (a % (int)pow(10, c - 1)) / 10;

    rev = last * (int)pow(10, c - 1) + middle * 10 + first;

    printf("%d", rev);

    return 0;
}