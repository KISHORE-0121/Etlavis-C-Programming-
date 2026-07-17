//Get a three-digit number from the user and print the ten's digit.

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);//three digit number
    b=a/10;
    c=b%10;
    printf("%d",c);
    return 0;
}