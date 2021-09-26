#include <stdio.h>
int main()
{
	float x,y,z;
	printf ("Enter the value of first angle : ");
	scanf ("%f",&x);
	printf ("Enter the value of second angle : ");
	scanf ("%f",&y);
	printf ("The value of third angle z is %.2f",(z=180-(x+y)));
	return 0;
}
