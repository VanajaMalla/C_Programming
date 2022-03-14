#include <stdio.h>
int main() {
  int n,m,length,rem,rev_int = 0;
  printf("Enter an integer: ");
  scanf("%d", &n);
  m=n;
  do {
    n /= 10;
    ++length;
  } while (n != 0);

  //printf("Number of digits: %d", length);
  while (length > 1){
  	rev_int*=10;
  	rem=m%10;
  	rev_int+=rem;
    m /= 10;
    --length;
  } 
  printf("Reversed Integer: %d", rev_int);
}
