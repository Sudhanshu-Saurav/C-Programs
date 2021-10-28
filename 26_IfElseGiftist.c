#include <stdio.h>

int main()
{
	int a;
	printf ("Enter your marks obtained in Science : ");
	scanf ("%i",&a);
	int b;
	printf ("Enter your marks obtained in Maths : ");	
	scanf ("%i",&b);
	
	if (a >= 33 && b >= 33)
	{ 
		printf ("Congratulation! you got a gift of 45 rupees");
	}
	else if (a >= 33 || b >= 33)
	{
		printf ("Congratulation! you got a gift of 15 rupees");
	}
	else {
		printf ("Sorry you didn't pass any subject");
	}
	return 0;
	
}
