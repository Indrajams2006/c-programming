#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the number");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("%d is the largest",a);
}
else
{
printf("%dis largest",c);
}
}
else
{
if(b>c)
{
printf("%d is the largest",b);
}
else
{
printf("%d is the largest",c);
}
}
return 0;
}

