#include <stdio.h>
int main()
{
	float A,B,C,D,E,Total;
	printf ("Enter the marks obtained(out of 100) in subject A : ");
	scanf ("%f",&A);
	printf ("Enter the marks obtained(out of 100) in subject B : ");
	scanf ("%f",&B);
	printf ("Enter the marks obtained(out of 100) in subject C : ");
	scanf ("%f",&C);
	printf ("Enter the marks obtained(out of 100) in subject D : ");
	scanf ("%f",&D);
	printf ("Enter the marks obtained(out of 100) in subject E : ");
	scanf ("%f",&E);
	printf ("The total Obtained Marks %0.2f",Total=A+B+C+D+E);
	printf ("\nAverage marks obtained is = %0.2f",Total/5);
	printf ("\nPercentage obtained = %0.2f",(Total/500)*100);
	return 0;
}
