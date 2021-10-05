#include <stdio.h>

int main ()
{
	int a,b,c;
	printf ("Enter the value of a : ");
	scanf ("%i",&a);
	printf ("Enter the value of b : ");
	scanf ("%i",&b);
	printf ("Enter the value of c : ");
	scanf ("%i",&c);
	if (a>b)
	{
		if (a>c)
		{
			printf ("%i is the greatest integer",a);
		}
		else
		{
			printf ("%i is the greatest integer",c);
		}
	}
	else if(b>c)
	{
		printf ("%i is the greatest integer",b);
	}
	else
	{
		printf ("%i is the greatest integer",c);
	}
	return 0;
}
