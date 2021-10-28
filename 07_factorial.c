
// c program to find factorial of any number upto 100

#include <stdio.h>
int main()
{
    int n,fact=1,i = 1;
    printf ("Enter the value of n for which you want to calculate factorial : n = ");
    scanf ("%i",&n);
    //int i = 1 ;
    for (i=1; i<=n;i++  )
    {
        fact=fact*i;
         //i++;
    }
    printf ("%i",fact);
    return 0;
}
