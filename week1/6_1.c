#include <stdio.h>
int main()
{
	int i,j=0;
	for (i=0;i<4;i++)
	{
		for(j=0;j<=35;j++)
		{
			if (i==0||i==3)
			{
				if (j<7||j>28)
					printf("-");
			}
			else if (i==1) 
			{
				if (j==0||j==6)
					printf("|     ");
				if(j==24||j==30)
					printf("|     ");	
			}
			else
			{
				if (j==0||j==6)
					printf("|     ");
				if(j==17||j==23)
					printf("|     ");
				if(j>8&&j<13)
					printf("-");
				if (j==7)
					printf(">>");
				if (j==13)
					printf(">");					
			}
			printf(" ");
		}
		printf("\n");
	}
}
	
