#include<stdio.h>
int main()
{
	int x,y,z,a=0;
	printf("x,y,z\n");
	scanf("%d,%d,%d",&x,&y,&z);
	a=x;
	x=y;
	y=z;
	z=a;
	printf("x=%d,y=%d,z=%d",x,y,z);
}
