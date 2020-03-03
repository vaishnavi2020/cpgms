#include<stdio.h>
void main()
{
char name[30];
float m1, m2, m3, total, avg;
printf("enter the name of the student:\n");
scanf("%s", name);
printf("enter marks of subject1:\n");
scanf("%f", &m1);
printf("enter marks of subject2:\n");
scanf("%f", &m2);
printf("enter marks of subject3:\n");
scanf("%f", &m3);
printf("name is:%s \n", name);
printf("marks in subject1 is:%f \n", m1);
printf("marks in subject2 is:%f \n", m2);
printf("marks in subject3 is:%f \n", m3);
total=m1+m2+m3;
avg=total/3.0;

printf("total is: ");
printf("%f \n", total);
printf("average is: %f \n", avg);

}
