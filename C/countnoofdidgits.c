#include<stdio.h>
int main()
{ int n;
    printf("enter a number");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n=n/10;
        count++;}
    printf("The number of digits in agiven number is%d",count);
    return 0;
}          