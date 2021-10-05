#include <stdio.h>
int main()
{
	float base,height,area;
	printf ("Enter the value of base : ");
	scanf ("%f",&base);
	printf ("Enter the value of height : ");
	scanf ("%f",&height);
	printf ("The area of triangle is %.2f",(area=0.5*base*height));
	return 0;
}
