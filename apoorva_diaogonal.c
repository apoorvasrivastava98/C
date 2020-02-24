#include<stdio.h>
void main()
{
int a[3][3],diag1=0,diag2=0,i,j;
printf("Enter the elements in array");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i==j)
{
diag1=diag1+a[i][j];
}
if((i+j)==2)
{
diag2=diag2+a[i][j];
}
}
}
printf("Sum of first diagonal=%d",diag1);
printf("\n");
printf("Sum of second diagonal=%d",diag2);
}
