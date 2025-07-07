#include<stdio.h>
int main()
{int  n;
    printf("enter a number");
    scanf("%d",&n);//wrote 1234 here so we would like to have 4321 as an answer 
    int r;//r is reverse of the entered number
    r=0;//now lwt's say thatthe reverse number is already 0
    while(n>0)// we are specifing that n is not negative or zero
   {r=r*10;
   r=r+(n%10);//let's say that r is 0 from 7 so now new r will be 4 as remainer of n%10 is 4
    n=n/10;
    }
    printf("reverse of the entered number is %d",r);
    return 0;
 }
