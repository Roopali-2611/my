#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if (x%5==0 || x%3==0)
    {
    if(x%15==0)
    {
        printf("voila");
    }
    }
    else{
        printf("Better luck next time");
    }
    return 0;
}