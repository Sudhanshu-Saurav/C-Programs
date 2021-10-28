#include <stdio.h>
int main()
{
	int x,y;
	printf ("Enter tha value of distance(in cm) you want to convert : ");
	scanf ("%i",&x);
	printf ("Distance on meter will be : %i\n",y=(x/100));
	printf ("Distance on kilometers will be : %i\n",y/1000);	
	return 0;
}
