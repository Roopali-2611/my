#include<stdio.h>
int main(){
    int n;
    printf("enter a number to check if it is even or odd:\n");
    scanf("%d",&n);
    int c=n%2;
    if(c==0){
        printf("%d is an even number",n);
    }
    else{
        printf("%d is an odd number",n);
    }
}