#include <stdio.h>
int main()
{
	int x,y;
	short int z;
	printf("x,y values\n");
	scanf("%d,%d",&x,&y);
	z=x+y;
	printf("x=%d,%d bits\n",x,sizeof(x));
	printf("y=%d,%d bits\n",y,sizeof(y));
	printf("z=%d,%d bits\n",z,sizeof(z));
}
	
