#include<stdio.h>
int powerlog(int a,int b){
    if(b==1)return a;
    int recans=a*powerlog(a,b-1);
    return recans;
}

int main(){
    int a,b;
    printf("Enter base");
    scanf("%d",&a);
    printf("enter power");
    scanf("%d",&b);
    int p=powerlog(a,b);
    printf("%d raised to power %d is %d",a,b,p);
    return 0;
}