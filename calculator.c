#include<stdio.h>
int main()
{
int n1,n2,result;
char operator;
printf("Enter the numbers");
scanf("%d %d",&n1,&n2);
printf("Enter the operator");
scanf(" %c",&operator);
switch(operator)
{
case '+':
result=n1+n2;
printf("the sum is%d",result);
break;
case '-':
result=n1-n2;
printf("the sub is%d",result);
break;
case '*':
result=n1-n2;
printf("the mul is%d",result);
break;
case '/':
result=n1-n2;
printf("the division is%d",result);
break;
case '%':
result=n1-n2;
printf("the mod is%d",result);
break;
default:
printf("invalid error");
}
return 0;
}




