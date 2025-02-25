#include<stdio.h>
int main()
{
int r1,r2,c1,c2,i,j,a[10][10],b[10][10],c[10][10];
printf("Enter the row and column of the first matrix");
scanf("%d %d",&r1,&c1);
printf("Enter the rows and columns of second matrix");
scanf("%d %d",&r2,&c2);
printf("enter the elements");
for(i=0;i<r1;i++)
{
 for(j=0;j<c1;j++)
 {
 scanf("%d",&a[i][j]);
 }
}
printf("enter the elements of second matrix");
for(i=0;i<r2;i++)
{
 for(j=0;j<c2;j++)
 {
  scanf("%d",&b[i][j]);
 }
}
if(r1==r2 && c1==c2)
{
  c[i][j]=a[i][j]+b[i][j];
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
 }
  }
for(i=0;i<r1;i++)
{
 for(j=0;j<c1;j++)
 {
  printf("%5d",c[i][j]);
 }
printf("\n");
}
}
else
{
printf("invalid");
}
return 0;
}
