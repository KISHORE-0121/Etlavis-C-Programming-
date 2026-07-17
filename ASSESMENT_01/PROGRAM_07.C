//Get a three-digit number from the user and print the one's digit.

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);//three digit number
    b=a%10;
    printf("%d",b);
    return 0;
}