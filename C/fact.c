#include<stdio.h>
int main(){
    int n,i,fact;
    printf("enter a number");
    scanf("%d",&n);
    if(n<0){
        printf("sorry");
    }
    else if(n==1||n==0){
        printf("factorial is 1");
    }
    else{
        fact=1;
        for(i=1;i<=n;i++){
            fact=fact*i;}
            printf("factorial is %d\n",fact);
    
    }
    return 0;
}