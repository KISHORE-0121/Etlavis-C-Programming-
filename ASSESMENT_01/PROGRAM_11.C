//Get a two-digit number from user and print the reverse of the number.

#include<stdio.h>
int main ()
{
    int a,b=0,rem=0,i;
    scanf("%d",&a);
    
    for(i=1;i<=2;i++)

    {
        rem=a%10;
        b=b*10+rem;
        a=a/10;
    }
    printf("%d",b);
    return 0;
}