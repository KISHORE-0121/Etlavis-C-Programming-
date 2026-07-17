//Write a loop program to print odd number between 1 and 9.

#include <stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        if(i%2==1)
        {
            printf("%d",i);
        }
    }

}