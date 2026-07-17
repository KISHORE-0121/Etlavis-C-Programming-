//Get a two-digit number from the user and check if the digit 0 and digit 1 are not identical. If yes, print "Success"; otherwise, print "Failure"

#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/10;
    c=a%10;
if(b != c)
    {
        printf("success");
    }
    else 
    {
        printf("failure");
    }
    return 0;
    
}