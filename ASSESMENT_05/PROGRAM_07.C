// Write a program get number from user print the total number of single-digit perfect square numbers in the number.

# include <stdio.h>
# include <math.h>

int main ()
{
    int a,b,r,c=0,tem;
    scanf("%d",&a);
    tem=a;


    while (tem !=0)
    {
        
        b=tem%10;
         r=sqrt(b);
        if(r*r==b)
        {
            c++;
        }
        tem = tem / 10;
    }
    printf("%d",c);

}