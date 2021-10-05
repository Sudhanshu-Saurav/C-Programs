#include <stdio.h>
int main()
{
	float A,B,C,D,E,Total;
	line1:
	printf ("Enter the marks obtained(out of 100) in subject A : ");
	scanf ("%f",&A);
	if (A>100)
	{
		printf ("Invalid! marks, please enter valid marks\n");
		goto line1;
	}
	line2:
	printf ("Enter the marks obtained(out of 100) in subject B : ");
	scanf ("%f",&B);
	if (B>100)
	{
		printf ("Invalid! marks, please enter valid marks\n");
		goto line2;
	}
	line3:
	printf ("Enter the marks obtained(out of 100) in subject C : ");
	scanf ("%f",&C);
	if (C>100)
	{
		printf ("Invalid! marks, please enter valid marks\n");
		goto line3;
	}
	line4:
	printf ("Enter the marks obtained(out of 100) in subject D : ");
	scanf ("%f",&D);
	if (D>100)
	{
		printf ("Invalid! marks, please enter valid marks\n");
		goto line4;
	}
	line5:
	printf ("Enter the marks obtained(out of 100) in subject E : ");
	scanf ("%f",&E);
	if (E>100)
	{
		printf ("Invalid! marks, please enter valid marks\n");
		goto line5;
	}
	printf ("The total Obtained Marks %0.2f",Total=A+B+C+D+E);
	printf ("\nAverage marks obtained is = %0.2f",Total/5);
	printf ("\nPercentage obtained = %0.2f",(Total/500)*100);
	return 0;
}
