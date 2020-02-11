#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("Enter Number1 Number2 and Number3");
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>n2 && n1>n3)
{
printf("Number1 is greatest");
}
else if(n2>n1 && n2>n3)
{
printf("Number2 is greatest");
}
else
{
printf("Number3 is greatest");
}
}
