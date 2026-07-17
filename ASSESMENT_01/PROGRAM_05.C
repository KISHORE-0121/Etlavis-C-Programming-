//Get a two-digit number from the user and print the one's digit.

#include <stdio.h>
int main ()
{
    int a,b;
    scanf("%d",&a);// two digit number
    b=a%10;
    printf("%d",b);
    return 0;

}