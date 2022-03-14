#include <stdio.h>
#include<string.h>
/*structure declaration*/
struct sumof2
{
 
  int a;
    int b;
    int c;
};

int main ()
{
  /*declare structure variable */
  struct sumof2 sum;

  /*read employee details */
  int d;
  printf ("enter a ?:");
  scanf ("%d", &sum.a);
  printf ("enter b ?:");
  scanf ("%d", &sum.b);
   printf ("enter c ?:");
  scanf ("%d", &sum.c);
   d= (sum.a>sum.b && sum.a>sum.c)? sum.a: (sum.b>sum.a && sum.b>sum.c)? sum.b:sum.c;
 
 printf("greatest of a,b and c is = %d",d);
   return 0;
}

