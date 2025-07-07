#include<stdio.h>
int (int n){
    if(n==1||n==2)return 1;
    int ans1=(n-1);
    int ans2=(n-2);
    int ans=ans1+ans2;
    return ans;
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d",(n));
    return 0; 
}