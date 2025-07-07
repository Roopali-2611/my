#include<stdio.h>
int main(){
    int n;
    printf("enter the number to find it's factorial\n");
    scanf("%d",&n);
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
        printf("\n the factorial of a given number is %d",fact);
    }
    return 0;
}