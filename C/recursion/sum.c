#include<stdio.h>
void sum(int n,int s){
    if(n==0)return;
    printf("%d\n",s);
    sum(n-1,s+n);//recursive call but usually we return after recursive call
return;
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}