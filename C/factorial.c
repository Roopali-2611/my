#include<stdio.h>
int main ()
{
    int n;
    printf("enter a number to find it's factorial\n");
    scanf("%d",&n);   
    int i,product=1;
    for(i=1;i<=n;i++){
    product=product*i;
    }
    printf("the factorial of entered number is:%d\n",product);
    return  0;
}