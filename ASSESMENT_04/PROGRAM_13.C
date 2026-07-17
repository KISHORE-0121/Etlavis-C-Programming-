//Write a program to get a number from user and interchange the first and last digits and print the result.

#include <stdio.h>
int main()
{
    int a,tem,c=0;

    scanf("%d",&a);
     tem=a;
    while(tem!=0)
    {
        c++;
        tem=tem/10;
    }
    printf("%d",c);
}