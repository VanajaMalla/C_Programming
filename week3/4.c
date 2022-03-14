#include <stdio.h>
int main() {
  int x,y;
  printf("Enter an integer: ");
  scanf("%d", &x);
  if(x<0)
  	y=-1;
  else if(x>0)
  	y=1;
  else
  	y=0;
  printf("x=%d\ny=%d",x,y);	
}
