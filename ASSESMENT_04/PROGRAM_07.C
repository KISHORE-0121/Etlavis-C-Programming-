//Write a loop program to print the two-digit odd numbers, who's sum of digits are 7.

#include <stdio.h>
int main()
{
    int i=1,sum=0,ten,one;

    for(i=10;i<100;i++)
    {
        if(i%2==1){
        
        ten = i/10;
        one = i%10;
        sum = ten + one;

        if(sum == 7)
    {
        printf("%d\n",i);
    }
        

    }
    
    
}
}