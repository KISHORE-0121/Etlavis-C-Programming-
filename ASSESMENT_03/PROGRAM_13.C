//Get a four-digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different. If yes, print "Success"; otherwise, print "Failure"

#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d",&a);
    b=(a/10)%10;
    c=a%10;
    if(b==c){
        printf("SUCCESS");

    }
    else{
        printf("FAILURE");
    }
    return 0;
    
}