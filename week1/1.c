#include <stdio.h>
void compute(float,float,float);
//Function Declaration
int main()
{
	float a,b,c,x=0;
	a=250,b=85,c=25;
	compute(a,b,c);    // Output-->4.166667
	a=300,b=70,c=70;
	compute(a,b,c);	   // Output-->1.#INF00-->positive infinity --Zero Division
}
void compute(float a,float b,float c)
	{
		float X;
		X=a/(b-c);
		printf("\n %f",X);
			
	}
		
