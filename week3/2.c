#include<stdio.h>
int main()
{
	int mm,pm,cm;
	printf("Enter Maths_Marks,Physics_Marks,Chemistry_Marks:\n");
	scanf("%d,%d,%d",&mm,&pm,&cm);
	if ((mm>=60 && pm>=50 && cm>=40)||(mm+pm+cm>=200)||(mm+pm>=150))
		printf("Eligible");
	else
		printf("Not Eligible");	
}
