#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i;
	printf("Enter the number you want to print table of : ");
	scanf ("%i",&n);
	
	for (i=1;i<=10;i++)
	{
		printf ("%i x %i = %i\n",n,i,n*i);
	}
	return 0;
}
