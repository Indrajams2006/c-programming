#include<stdio.h>
int main()
{
int num,rev=0,rem,temp;
printf("enter the number");
scanf("%d",&num);
temp=num ;
while (num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}

printf("temp is %d",temp);
if(temp==rev)
{
printf("the number is palindrome");
}
else
{
printf("the number is not a palindrome");
}
return 0;
}
