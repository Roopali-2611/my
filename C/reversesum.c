#include<stdio.h>
int main()
{int n;
    printf("enter a number");
    scanf("%d",&n); 
    printf("the entered number is %d",n);
    int p;
    p=n;
    int r;
    r=0;
    while(n>0)
   {r=r*10;
   r=r+(n%10);
    n=n/10;
    }
    printf("reverse of a number is %d\n",r);
    int s=0;
    s=p+r;
    printf("sum of n and r is %d",s);
    return 0;
 }
