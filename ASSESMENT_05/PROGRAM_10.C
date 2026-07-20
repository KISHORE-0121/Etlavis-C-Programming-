// Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14.
#include <stdio.h>
int main()
{
    int i,b,tem,c=0;
    for(i=1;i<100000;i++)
    {
        tem=i;
        int sum = 0;
        while(tem !=0)
        {
            b=tem%10;
            sum=sum+b;
            tem=tem/10;
        }
        if(sum==14)
        {
            c++;
        }
    }
    printf("%d",c);
}