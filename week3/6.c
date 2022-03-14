#include <stdio.h>
int main() {
  int c,n,i=0;
  int bin[400];
  printf("Enter an integer: ");
  scanf("%d", &n);
  for(i=0;i<15;i++)
  {
  	bin[i]=0;
  	//printf("%d",bin[i]);
  }
  i=0;
  while (n>=1)
  {
  	bin[i]=n%2;
  	printf("%d\n",bin[i]);
  	n/=2;
  	i++;
  }
  c=i;
  for(i=0;i<=c;++i)
  {
  	printf("%d",bin[c-i]);
  }
}
