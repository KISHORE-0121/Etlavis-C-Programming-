//Get a three-digit number from user. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum, and print the sum. Note: The result should always be a single digit only.

#include<stdio.h>
int main ()
{
    int a,i,sum=0,b=0,num,c;
    scanf("%d",&a);

    for(i=1;i<=3;i++)
    {
        num = a%10;
        sum=num+sum;
        a=a/10;
    }

    if(sum<10){
        printf("%d",sum);
    }
    else if (sum>=10){
        
    
    
    for(i=1;i<=2;i++)
    {
        c=sum%10;
        b=c+b;
        sum=sum/10;
    }

    printf("%d",b);

}
return 0;
}