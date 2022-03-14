#include<stdio.h>
int main()
{
	int x,y=0;
	printf("x,y\n");
	scanf("%d,%d",&x,&y);
	if(x%y==0)
		printf("%d is a multiple of %d",x,y);
	else
		printf("%d is not a multiple of %d",x,y);
}
