#include<stdio.h>
void main()
{
int a[5],b[5],c[5];
int i,j,k,sum=0;
for(i=0;i<5;i++)
{
printf("Enter the elements in array1");
scanf("%d",&a[i]);
}
for(j=0;j<5;j++)
{
printf("Enter the elements in array2");
scanf("%d",&b[j]);
}
for(k=0,i=0,j=0;k<5;k++,i++,j++)
{
c[k]=a[i]+b[j];
}
printf("third array=");
for(k=0;k<5;k++)
{
printf("%d  ",c[k]);
}
}
