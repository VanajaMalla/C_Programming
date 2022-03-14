#include<stdio.h>
#include<string.h>
int main()
{
	int x;float y;
	char name[30];
	printf("Enter Name:\n");
	scanf("%s",&name);
	printf("No.of calls made:\n");
	scanf("%d",&x);
	if (x<100)
		y=250;
	else
		y=250+(x-100)*1.25;
	printf("Customer Name:%s\n",name);
	printf("No.of calls made:%d\n",x);
	printf("Total cost for calls:%.2f",y);	
	
}
