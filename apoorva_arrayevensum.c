#include<stdio.h>
void main()
{
int a[10],sum=0,i;
printf("Enter the elements in array");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]%2==0)
{
sum=sum+a[i];
}}
printf("sum of even numbers=%d",sum);
}

