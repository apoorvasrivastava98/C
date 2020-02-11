#include<stdio.h>
void main()
{
int m1,m2,m3,m4,m5,sum;
float percen;
printf("Enter marks of 5 subjects");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
sum=(m1+m2+m3+m4+m5);
percen=(sum/5);
printf("sum=%d",sum);
printf("percentage=%f",percen);
}
