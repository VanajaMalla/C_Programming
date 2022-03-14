#include<stdio.h>
#include <math.h>
int main()
{
	float x;
	printf("x\n");
	scanf("%f",&x);
	printf("Given Value: %f \n floor_Value: %d \n Ceil_Value: %d",x,(int)floor(x),(int)ceil(x));
}
