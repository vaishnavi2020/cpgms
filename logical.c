#include<stdio.h>
void main()
{
int age;
printf("enter the age: \n");
scanf("%d", &age);
if(age <= 18 && age >= 13)
{
printf("you are a teenager \n");
}
else
{
printf("you are not a teenager \n");
}
}
