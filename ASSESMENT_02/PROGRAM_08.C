//Get a two-digit number from the user and check if the digit 0 and digit 1 are not identical. If yes, print 1; otherwise, print 0

#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    printf("%d",b!=c);
    return 0;
    
}