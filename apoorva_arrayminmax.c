#include<stdio.h>
void main()
{
int a[5],i,min,max;
printf("Enter the elements in array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<5;i++)
{
if(max<a[i])
{
max=a[i];
}
if(min>a[i])
{
min=a[i];
}
}
printf("Max=%d",max);
printf("Min=%d",min);
}

