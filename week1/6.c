#include <stdio.h>
int main()
{
	int i,j=0;
	for (i=0;i<4;i++)
	{
		for(j=0;j<7;j++)
		{
			if (i==0||i==3)
				printf("-");
			else if (j==0||j==6)
				printf("|     ");
			printf(" ");
		}
		for(j=7;j<15;j++)
		{
			if (i==2)
			{
				if (j==7)
					printf(">>");
				else if (j==14)
					printf("->");
				else
					printf("-");
			}
			printf(" ");	
		}
		for(j=20;j<22;j++)
			printf(" ");
			
	
		printf("\n");
	}
}
	
