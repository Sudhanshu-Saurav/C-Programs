#include <stdio.h>
#include <math.h>
int main()
{
	int a,i;
	printf ("Enter the value of a : ");
	scanf ("%i",&a);
	for (i=2;i<a;i++)
	{
		if (a%i==0)
		{
			printf ("%i is not prime number\n",a);
			break;
			//goto line;	
		}	
	}
	if (i==a)
	printf ("%i is a prime no",a);	
	//line:
	return 0;	
}
