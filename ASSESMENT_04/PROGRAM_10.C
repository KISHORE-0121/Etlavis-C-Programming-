//Write a program to get a number from user print the total number of digits in that number

#include <stdio.h>

int main()
{
    int a,i=0;
    scanf("%d",&a);
    
    while (a!=0)
    {
        a= a/10;
        i++;
    }
    printf("%d",i);
}