//Write a program to get a number from user and if the last digit of the number is even print the same number. If the last digit of the number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit -MSB)

#include <stdio.h>
#include <math.h>

int main ()
{
    int a,b,d,c=0;
    
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        c++;
        b=b/10;
    }
    int p=(int)round(pow(10,c-1));
    printf("p = %d\n", p);

    d=a/p;
    if(d%2==0)
    {
        printf("%d",a);
    }
    else 
    {
        a = a-p;
        printf("%d",a);
    }
    
  
}