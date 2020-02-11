#include<stdio.h>
void main()
{
int n1,n2,t;
printf("Enter Number1 amd Number2");
scanf("%d%d",&n1,&n2);
t=n1;
n1=n2;
n2=t;
printf("Number1=%d",n1);
printf("Number2=%d",n2);
}
