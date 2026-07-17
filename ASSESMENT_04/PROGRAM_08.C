//Write a loop program to print the two-digit even numbers, who's sum of digits are 6.

#include <stdio.h>
int main ()
{
    int a,i,c,sum=0;
    for(i=10;i<100;i++)
    {
        if(i%2==0)
        {
            c=i%10;
            a=i/10;
            sum = c+a;

            if(sum==6)
    {
        printf("%d\n",i);
    }
            
        }
        

    }
    
}