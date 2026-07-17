//Get a two-digit number from the user and check if the digit 0 is less than the digit 1. If yes, print "Success"; otherwise, print "Failure"

#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/10;
    c=a%10;
if(c<b)
    {
        printf("success");
    }
    else 
    {
        printf("failure");
    }
    return 0;
    
}