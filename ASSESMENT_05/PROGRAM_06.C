//Write a program get number from user print the total number of two-digit odd numbers in the number.

#include <stdio.h>


int main()
{
    int a,b,c=0,tem;
    scanf("%d",&a);
    tem=a;
    while (tem!=0)
    {
        b=tem%100;
        if(b%2==1 && b>=10)
        {
            c++;
        }
        tem=tem/100;
    }
    printf("%d",c);
    


   
}