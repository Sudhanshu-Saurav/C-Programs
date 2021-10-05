#include <stdio.h>
#include <math.h>
int main()
{
	float P,R,T;
	printf ("Enter the value of principal amount : ");
	scanf ("%f",&P);
	printf ("Enter the value of rate : ");
	scanf ("%f",&R);
	printf ("Enter the value of time : ");
	scanf ("%f",&T);
	printf ("Compound Interest %.3f",P*pow((1+R/100),T));
	return 0;
}
