#include<stdio.h>
int main()
{
	float x;
	int z;
	printf("x\n");
	scanf("%f",&x);
	z=(int)x%100;
	printf("x=%f, y=%d",x,z);
}
