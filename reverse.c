#include<stdio.h>
#include<string.h>
int main()
{
char str1[50],str2[50],i,j;
printf("enter the string");
scanf("%s",str1);
printf("enter the second string");
scanf("%s",str2);
  if(strcmp(str1,str2)==0)
  {
   printf("strings are same");
  }
    else
    {
     printf("strings are not same");
    }
 return 0;
 }
 
