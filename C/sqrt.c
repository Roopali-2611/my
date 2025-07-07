#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("enter a number whose you want to find sqaure root of");
    scanf("%d",&a);
    int root = sqrt(a);
    printf("the sqaure root of the enetered number is:%dd",root);
    return 0;
}