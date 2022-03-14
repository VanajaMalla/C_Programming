#include<stdio.h>
int main()
{
	int i,count,sum=0;
	for(i=100;i<200;i++)
	{
		if (i%7==0)
		{
			count=count+1;
			sum=sum+i;
			printf("%d\n",i);
		}
	}
	printf("No.of integers divisible by 7 in between 100  and 200 is %d and those sum is %d\n",count,sum);
}
