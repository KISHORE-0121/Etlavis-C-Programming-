//Write a loop program to print the two-digit odd numbers, below 20.

#include <stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=10;i<=a;i++)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }


    }
}