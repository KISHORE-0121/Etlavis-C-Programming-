//Write a program to get number from user, print whether that number's first two digits (ten's digits and one's digit) is prime.

#include <stdio.h>
int main ()
{
    int a,b,i,c=0;

    scanf("%d",&a);
    
     b = a%100;

    for(i=2;i<=a;i++)
    {
        if(b%i==0)
        {
            c++;
        }
    }
    if (c==1)
    {
        printf("prime");
    }
    else{
        printf("not a prime");
    }
}