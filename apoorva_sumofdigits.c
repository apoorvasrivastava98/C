#include<stdio.h>
void main()
{
int n,i,r,s=0;
printf("Enter a number");
scanf("%d",&n);
for(i=n;i>0;i=i/10)
{
r=i%10;
s=s+r;
}
printf("Sum of digits=%d",s);
}
