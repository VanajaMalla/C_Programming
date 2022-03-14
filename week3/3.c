#include<stdio.h>
#include<string.h>
int main()
{
	int num;
	char snum[10];
	printf("Enter a number:\n");
	scanf("%d",&num);	
	itoa(num, snum, 10);
	num=atoi(strrev(snum));
	printf("%d\n",num);	
}
