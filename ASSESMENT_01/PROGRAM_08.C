//Get a three-digit number from the user and print the hundred's digit.

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);//three digit number
    b=a/100;
    printf("%d",b);
    return 0;
}