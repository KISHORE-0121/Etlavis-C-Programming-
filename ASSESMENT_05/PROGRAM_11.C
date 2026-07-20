//Write a program to get two numbers from user and print the LCM of those numbers.

# include <stdio.h>

int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        i=a;

    }
    else
    {
        i=b;
    }
    while (1)
    {
        if(i%a == 0 && i%b == 0)
        {
            printf("%d",i);
            break;

        }
        i++;
    }
   
}