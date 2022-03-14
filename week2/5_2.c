#include<stdio.h>
int main()
{
	int a,b,c,x=0;
	printf("x,y,z\n");
	scanf("%d,%d,%d",&a,&b,&c);
	x=((a>=b)?((a>=c)?a:c):((b>=c)?b:c));
	printf("%d is largest number",x);
}
