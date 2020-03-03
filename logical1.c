#include<stdio.h>
void main()
{
int a;
printf("enter 1 if you have black pen\n");
printf("enter 2 if you have blue pen\n");
scanf("%d", &a);
if(a==1 || a==2)
{
printf("you have a pen\n"); 
}
else
{
printf("you dont have pen\n");
}
}
