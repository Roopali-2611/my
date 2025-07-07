#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("enter third number");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("%d is the greatest",a);
    if(b>c && b>a)
    printf("%d is the greatest",b);
    if(c>b && c>a)
    printf("%d is the greatest",c);
return 0;
}