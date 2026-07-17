//Get a two-digit number from the user, make the ten's digit 1, and then print it..

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    a=a%10;
    b= a+10;
    printf("%d",b);
    return 0;
}