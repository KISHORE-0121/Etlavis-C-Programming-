//Write a program to get a number from user, print whether that number is prime, and sum of digit is equal to 14.

#include <stdio.h>
int main ()
{
    int a,b,i,c=0,sum=0;
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    while (a!=0)
    {
        b=a%10;
        sum= sum +b;
        a=a/10;
    }
    if (sum==14&&c==1)
    {
        printf("Prime & sum of digits is 14");

    }
    else if (sum!=14&&c==1)
    {
        printf("Prime & sum of digits is not 14");
    }

    else if (sum==14&&c!=1)
    {
        printf("Not Prime & sum of digits is 14");

    }
    else if (sum!=14&&c!=1)
    {
        printf("Not Prime & sum of digits is not 14");
    }
}