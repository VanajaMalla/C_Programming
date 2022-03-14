#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter 100 persons ages");
	for(i=1;i<=100;i++)
	{
		scanf("%d\n",&n);	
		if(n>=50&&n<=60){
			count++;
		}
	}
	printf("count=%d",count);
}
