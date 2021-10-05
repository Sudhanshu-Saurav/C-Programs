#include <stdio.h>
#include <math.h>
int main()
{
	float side,area;
	printf ("Enter the value of side : ");
	scanf ("%f",&side);
	printf ("The area of triangle is %.2f",(area=(sqrt(3)/4)*side*side));
	return 0;
}
