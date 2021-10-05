#include <stdio.h>

int factorial(int number)
{
	if ( number == 0 || number == 1)
	{
		return 1;
	}
	else 
	{
	    return number*factorial(number-1);
	}
}

int main()
{
	int num;
	printf ("Enter the numer you want to print factorial of : \n");
	scanf("%i",&num);
	printf("the factorial of %i is %i",num,factorial(num));
}
