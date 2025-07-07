#include<stdio.h>
void greeting(int n){
    if(n==0)return;
    printf("good morning\n");
greeting(n-1);
return;
}
int main(){
    int n;
    printf("enter no of times you want to print good morning ");
    scanf("%d",&n);
    greeting(n);
    return 0;
}