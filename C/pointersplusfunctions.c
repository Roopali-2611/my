#include<stdio.h>
void swap(int *x,int *y)
{int temp;
   temp=*x;
   *x=*y;
   *y=temp;
   return ;
}
int main()
{
    int a=4;
    int b=1;
    int c=3;
    swap(&a,&b);
    printf(" just wanted to say  %d",a);
    printf("%d",b);
    printf("%d",c);6
    return 0;
}