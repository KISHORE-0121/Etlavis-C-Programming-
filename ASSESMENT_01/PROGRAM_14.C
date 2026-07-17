//Get a two-digit number from the user, make the one's digit 0, then print it.

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);// two digit number
    a= a/10;
    b=a*10;
    printf("%d",b);
    return 0;

}