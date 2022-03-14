#include<stdio.h>
int main()
{
	int i,j=0;
	for(i=1;i<=15;i++)
	{
		for(j=1;j<=18;j++){	
		if(i==1||i==2||i==3||i==7||i==8||i==9||i==13||i==14||i==15)
			printf("*");
		else if((i==4||i==5||i==6)&&(j<5))
			printf("*");
		else if((i==10||i==11||i==12)&&(j>14))
			printf("*");
		else
			printf(" ");			
		}
		printf("\n");
	}
}
