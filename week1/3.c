#include <stdio.h>
int main()
{
	int x,y;
	short int z;
	printf("x,y values\n");
	scanf("%d,%d",&x,&y);
	z=x+y;
	printf("x=%d,%d bytes\n",x,sizeof(x));
	printf("y=%d,%d bytes\n",y,sizeof(y));
	printf("z=%d,%d bytes\n",z,sizeof(z));
	/*
	x,y 6 digit numbers
	input: 123456,678910
	output:	x=123456,4 bytes
		y=678910,4 bytes
		z=15934,2 bytes*/
	//Ans: 2 bytes can store values of Range upto 0 to 2^(n-1)-1 i.e 2^15-1=32767
}
	
