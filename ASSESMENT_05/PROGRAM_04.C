 // Write a program print total number of single digit Prime numbers

 # include <stdio.h>
 int main(){
 int i,j,c=0,sum=0;

 for(i=2;i<10;i++)
 {
    c=0;
    for(j=2;j<=i;j++)
    {
        if(i%j==0)
        {
            c++;
        }
    }
     if(c == 1)
        {
            sum = sum + i;
        }
   
  
}

printf("%d",sum);

 }
