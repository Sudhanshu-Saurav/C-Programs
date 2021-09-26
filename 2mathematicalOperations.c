#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a,b :");
    scanf ("%i %i",&a ,&b);
    //printf("Enter the value of b :");
    //scanf ("%i",&b);
    //Sum= a+b;
    //Diff= a-b;
    //Prod = a*b;
    //Div = a/b;
    printf("\nSUM = %i",a+b);
    printf("\nDifference = %i",a-b);
    printf("\nProduct = %i",a*b);
    printf("\nDivision = %i",a/b);
    return 0;
}
