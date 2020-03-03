#include<stdio.h>
void main()
{
int a, b, ch;
printf("enter the value of a and b");
scanf("%d%d", &a, &b);
printf("enter choice");
scanf("%d", &ch);
switch(ch)
{
case 1:printf("sum=%d", a+b);
case 2:printf("sub=%d", a-b);
default:printf("stop");
}
}

