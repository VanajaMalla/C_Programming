#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("x,y,z\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if (a>=b)
	{
		if (a>=c)
			printf("%d is largest number",a);
		else
			printf("%d is largest number",c);
	}
	else
	{
		if (b>=c)
			printf("%d is largest number",b);
		else
			printf("%d is largest number",c);
	}
}
