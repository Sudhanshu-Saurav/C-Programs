#include <stdio.h>
int main()
{
    int n,table;
    printf("Enter the value of n for which you want to print the table : ");
    scanf ("%i",&n);
    int i=1;
    while (i<=10)

    {
        //table=n*i;
        printf("\t %i",n*i);
        i++;
    }
}
