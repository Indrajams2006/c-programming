#include<stdio.h>
int main()
{
int roll_no,age;
float height;
char grade;
printf("enter the roll_no");
scanf("%d",&roll_no);
printf("enter the age");
scanf("%d",&age);
printf("enter the height");
scanf("%f",&height);
printf("enter the grade");
scanf(" %c",&grade);
printf("the roll_no is %d\n",roll_no);
printf("the age is %d years\n",age);
printf("the height is %f\n",height);
printf("the grade is %c\n",grade);
return 0;
}
