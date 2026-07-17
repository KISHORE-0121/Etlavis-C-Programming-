//Write a loop program to print the sum of two-digit odd numbers, whose ten's digit is 7.

#include <stdio.h>

int main()
{
    int i,sum=0;

    for(i=10;i<100;i++)
    {
        if(i%2==1)
        {
            if(i/10==7)
            {
                sum = i+ sum;
    
            }
        }
    }
    printf("%d",sum);
}