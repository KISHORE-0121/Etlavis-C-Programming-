//Get a four-digit number from user and only reverse the first two digits of the number, then print the number.

#include <stdio.h>
int main()
{
    int a,rev=0,rem=0;
    int first , last, final=0 ;

    scanf("%d",&a);
    first=a/100;
    last = a%100;

    while (first != 0)
    {
       rem=first%10;
       rev= rev*10+rem;
       first= first/10;
    }

    final=rev*100 + last;

    printf("%d",final);
    return 0;

}