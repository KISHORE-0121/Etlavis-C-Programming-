//Get a three-digit number from the user, make the one's digit 2, and then print it.

#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    a=a/10;
    b=a*10+2;
    printf("%d",b);
}