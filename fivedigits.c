#include <stdio.h>
void main()
{
  int a, b, c, d, e, n, s=0;
  printf("Enter the number n\n");
  scanf("%d", &n);
  a=n%10;
  n=n/10;
  b=n%10;
  n=n/10;
  c=n%10;
  n=n/10;
  d=n%10;
  n=n/10;
  e=n%10;
  n=n/10;
s=a+b+c+d+e;
  printf("sum of the numbers=%d\n", s);
}
  

  



