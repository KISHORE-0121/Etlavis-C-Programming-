//Get a three-digit number from the user and make the ten's digit as 0, then print it.

# include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    a=(a/100)*100 + a%10;
    printf("%d",a);
    return 0;

}