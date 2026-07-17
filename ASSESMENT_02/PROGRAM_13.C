//Get a four-digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different. If yes, print 1; otherwise, print 0

#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d",&a);
    b=(a/10)%10;
    c=a%10;
    printf("%d",b==c);
    return 0;
    
}