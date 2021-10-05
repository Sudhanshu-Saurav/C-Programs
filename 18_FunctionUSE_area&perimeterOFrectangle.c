#include <stdio.h>
#define pi 3.14

areaofrec( float l, float b)
{
	return l*b;
}

perimeter(float l,float b)
{
	return (2*(l+b));
}
void main()
{
	
	float l,b,a,p;
	printf("Enter the value of length : ");
	scanf ("%f",&l);
	printf("Enter the value of breadth : ");
	scanf ("%f",&b);
		
	a=areaofrec(l,b);
	printf ("Area = %0.2f\n",a);
	p=perimeter(l,b);
	printf ("circumference = %0.2f",p);
	
}
