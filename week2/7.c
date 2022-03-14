#include<stdio.h>
int main()
{
	int x,y,z,min,max;
	float avg,sum;
	printf("x,y,z\n");
	scanf("%d,%d,%d",&x,&y,&z);
	sum=x+y+z;
	avg=sum/3;
	max=((x>=y)?((x>=z)?x:z):((y>=z)?y:z));
	min=((x<=y)?((x<=z)?x:z):((y<=z)?y:z));
	printf(" sum=%.2f\n avg=%.2f\n min=%d\n max=%d",sum,avg,min,max);
}
