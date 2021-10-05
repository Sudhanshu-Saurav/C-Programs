
#include<stdio.h>
int main()
{
   float power;
   printf(" Enter the power of e \n");
   scanf("%f",&power);
   int i,acc = 4;
   float ans =1;
   float temp=1;
   for(i=1;i<=acc;i++)
   {
   		temp=(temp*power)/i;
   		ans = ans+ temp;
   }
    printf(" %f ",ans);
	return 0;
}
