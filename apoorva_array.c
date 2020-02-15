#include<stdio.h>
void main()
{
int a[5];
int i,sum=0;
printf("Enter elements in array");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
sum=sum+a[i];
}
printf("Sum=%d",sum);
}

