#include<stdio.h>
void main()
{
    int n,i,j,r;
    printf("Enter the number to be checked\n");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        j=i%10;
        r=r*10+j;
    }
    if(n==r)
    {
         printf("%d is a palindrome number",n);
    }
    else
    {
        printf("%d is not a palindrome number",n);
    }
}
