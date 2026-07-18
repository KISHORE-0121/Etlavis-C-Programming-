//Write a program get number from user print whether that number is prime or not.

#include <stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%i==0){
            c++;
        }
    }
    if(c==1)
    {
        printf("prime");
    }
    else 
    {
        printf("not a prime");
    }
}