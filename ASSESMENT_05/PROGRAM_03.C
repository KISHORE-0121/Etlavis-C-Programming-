//Write a program to get a 4-digit number from user, print whether that number's middle two digits (hundred's digit and ten's digit) is prime.

#include <stdio.h>
int main()
{
    int a,b,d,i,c=0;
    scanf("%d",&a);   // 4 digit number
    b=a/10;
    d=b%100;
    for(i=2;i<=a;i++)
    {
        if(d%i==0)
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