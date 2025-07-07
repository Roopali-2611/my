#include<stdio.h>
int main()
{
    int a = 25;
    int* x;
    x = &a;
    *x=8;
    printf("%p\n",&a);
    printf("%d",*x);
    return 0;
}