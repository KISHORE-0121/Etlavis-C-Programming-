//Write a program to get a number from user and print the sum of all digits.

#include <stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d",&a);

    while (a !=0)
    {
        b= a%10;
        sum= sum + b;
        a=a/10;

    }
    printf("%d",sum);


}