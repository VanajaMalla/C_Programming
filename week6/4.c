#include <stdio.h>
#include<string.h>
/*structure declaration*/
struct sumof2
{
 
  int a;
  int b;
};

int main ()
{
  /*declare structure variable */
  struct sumof2 sum;

  /*read employee details */
  
  printf ("enter a ?:");
  scanf ("%d", &sum.a);
  printf ("enter b ?:");
  scanf ("%d", &sum.b);
  printf("sum of a and b = %d",sum.a+sum.b);
   return 0;
}

