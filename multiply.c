#include<stdio.h>
int main()
{
int r1,r2,c1,c2,i,j,a[10][10],b[10][10],result[10][10],k;
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
printf("Enter the number of rows and columns of second matrix");
scanf("%d %d",&r2,&c2);
if(c1!=r2)
{
printf("matrix multiplication is not possible\n");
return 0;
}
printf("Enter the elements of the second matrix");
for(i=0;i<r2;i++)
{
 for(j=0;j<c2;j++)
 {
 scanf("%d",&b[r2][c2]);
  }
 }
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c2;j++)
  {
  result[i][j]=0;
   for(k=0;k<c1;k++)
   {
    result[i][j]+=a[i][k]*b[k][j];
   }
  }
 }
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c2;j++)
  {
   printf("%d",result[i][j]);
   }
   printf("\n");
  }
 return 0;
}
