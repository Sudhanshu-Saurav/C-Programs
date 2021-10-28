
//This is a C program to compute the area and perimeter of a rectangle

#include <stdio.h>
int main()
{
	int L,B;
	printf ("Enter the value of L = ");
	scanf ("%i",&L);
	printf ("Enter the value of B = ");
	scanf ("%i",&B);
	printf ("area of rectangle = %i\n",L*B);
	printf ("Perimeter of a rectangle = %i\n",2*(L+B));
	return 0;	
}

