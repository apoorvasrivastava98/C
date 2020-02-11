#include<stdio.h>
#include<math.h>
void main()
{
float p,r,t,si,ci;
printf("Enter principal,rate and time");
scanf("%f%f%f",&p,&r,&t);
si=(p*r*t)/100;
ci=p*(pow(1+(r/100),t));
printf("Simple interest =%f",si);
printf("Compound interest =%f",ci);
}
