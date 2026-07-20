//  Write a program get number from user print the total number digits which are odd in the number.

#include <stdio.h>


int main()
{
    int a,b,c=0,tem;
    scanf("%d",&a);
    tem=a;
    while (tem!=0)
    {
        b=tem%10;
        if(b%2==1)
        {
            c++;
        }
        tem=tem/10;
    }
    printf("%d",c);
    


   
}