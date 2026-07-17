//Get a four-digit number from the user and check if the first 2 digits and last 2 digits are the same. If yes, print "Success"; otherwise, print "Failure"

#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    if(b==c){
        printf("SUCCESS");

    }
    else{
        printf("FAILURE");
    }
    return 0;
    
}