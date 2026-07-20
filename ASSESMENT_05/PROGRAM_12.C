//Write a program to get three numbers from user and print the LCM of those numbers.

# include <stdio.h>

int main()
{
    int a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b&&a>c)
    {
        i=a;

    }
    else if(b>a&&b>c)
    {
        i=b;
    }
    else{
        i=c;
    }
    while (1)
    {
        if(i%a == 0 && i%b == 0 && i%c == 0)
        {
            printf("%d",i);
            break;

        }
        i++;
    }
   
}