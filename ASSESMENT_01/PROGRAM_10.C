//Get a three-digit number from the user and print the sum of the digits.

#include <stdio.h>
int main ()
{
    int a,i,sum=0;
    scanf("%d",&a);
    for(i=1;i<=3;i++)
    {
        sum = sum + (a%10);
        a = a/10;
        
    }
    printf("%d",sum);

}