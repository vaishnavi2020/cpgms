#include<stdio.h>
void main()
{
float a, b, c, area, perimeter;
printf("enter the value of a, b, c \n");
scanf("%f%f%f", &a, &b, &c);
area=0.5*a*b;
perimeter=a+b+c;
printf("area of triangle=%f\n", area);
printf("perimeter of triangle=%f\n", perimeter);
}
