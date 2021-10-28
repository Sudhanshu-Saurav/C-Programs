#include <stdio.h>
int main()
{
	int a,b,z;
	printf ("Enter the value of a :");
	scanf ("%i",&a);
	printf ("Enter the value of b :");
	scanf ("%i",&b);
	if (a%2==0 || b%2==0)
	{
		if(a%2==0 && b%2==0)
		{
			printf ("Both of them is Even");
		}
		else
			printf("One of them is even");
	}
	else
		printf ("None of them is even");
	return 0;
}
