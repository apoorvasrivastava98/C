#include<stdio.h>
#include<math.h>
void main()
{
int n,i,r,c,sum=0;
printf("Enter a number");
scanf("%d",&n);
for(i=n;i>0;i=i/10)
{
r=i%10;
c++;
}
sum=sum+r*pow(10,c);
printf("Reverse of number=%d",sum);
}
