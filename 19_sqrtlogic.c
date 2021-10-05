#include <stdio.h>
int main()
{
	int a,b,i=1,c;
	printf ("Enter the values of Base :");
	scanf ("%i",&a);
	printf ("Enter the value of power :");
	scanf ("%i",&b);
	while (i<=b)
	{
		c=c*a;
		i++;
	}
	printf ("The value of %i as base and %i as raised power is %i",a,b,c);
	return 0;
}
