#include<stdio.h>
int main ()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int i,sum=0;
    for(i=1;i<=n;i++){
    if(i%2!=0)
    sum=sum+i;
    else
    sum=sum-i;
    }
    printf("sum of the series is %d",sum);

return 0;
}