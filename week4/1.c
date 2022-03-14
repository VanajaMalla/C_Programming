#include<stdio.h>
int main()
{
	int i,j; float temp=0,min=100,max=0;
	float tab[100][100];
	for(i=1;i<=31;i++)
	{
		for(j=1;j<=10;j++){	
			scanf("%f,",&tab[i][j]);
		}
	}
	for(i=1;i<=31;i++)
	{
		for(j=1;j<=10;j++){	
			printf("%.1f ",tab[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=31;i++)
	{
		for(j=1;j<=10;j++){
			if (min>tab[i][j])
				min=tab[i][j];
			if(max<tab[i][j])
				max=tab[i][j];
		}
	}
	printf("Maximum Temperature=%.1f\n",max);
	printf("Minimum Temperature=%.1f",min);
}
