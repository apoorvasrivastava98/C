#include <stdio.h>

int main()
{
    int i,n,r,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        r=i%10;
        sum=sum+(r*r*r);
    }
if(sum==n){
    printf("It is an armstrong number");
}
else{
   printf("It is not an armstrong number"); 
}
    return 0;
}
