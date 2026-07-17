//Get a number from the user, add 2 to that number, and print the result.

#include <stdio.h>  
int main()  
{  
    int num;  
    printf("Enter a number: ");  
    scanf("%d", &num);  
    num += 2;  
    printf("The result after adding 2 is: %d\n", num);  
    return 0;  
}