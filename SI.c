#include <stdio.h>
int main()
{
	float P,R,T;
	printf ("Enter the value of principal amount : ");
	scanf ("%f",&P);
	printf ("Enter the value of rate : ");
	scanf ("%f",&R);
	printf ("Enter the value of time : ");
	scanf ("%f",&T);
	printf ("Simple Interest %.3f",(P*R*T)/100);
	return 0;
}
