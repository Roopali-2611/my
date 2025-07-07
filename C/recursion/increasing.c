#include<stdio.h>
void increasing(int x,int n){
    if(x>n)return;
    printf("%d\n",x);
    increasing(x+1,n);//recursive call but usually we return after recursive call
return;
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}