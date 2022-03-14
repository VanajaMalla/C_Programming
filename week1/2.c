#include <stdio.h>
float compute(float,float,float,float);
//Function Declaration
int main()
{
	float x1,x2,y1,y2,distance;
	printf("x1,y1,x2,y2\n");
	scanf("%f,%f,%f,%f",&x1,&y1,&x2,&y2);
	distance=compute(x1,y1,x2,y2);
	printf("distance = %f",distance);
}
float compute(float x1,float y1,float x2,float y2)
	{
		float X;
		X=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
		return X;
			
	}
		
