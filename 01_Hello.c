#include <stdio.h>
int main()
{
	float x;
	printf("Enter the value temp (in celcius) you want to convert to farenheit : ");
	scanf ("%f",&x);
	printf ("%0.2f degree celcius",x );
	printf ("is equal to %0.2f",((1.8*x)+32));
	printf (" degree farenheit");
	printf("Hello");
	return 0;
	
}

