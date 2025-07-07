#include<stdio.h>
int main()
{
   int l,b,a,p;
   printf("enter lenght");
   scanf("%d ",&l);
   printf("enter breadth");
   scanf("%d",&b);
   a=l*b;
   p=2*(l+b);
   if (a>p){
    printf("area is greater");

   }
   else
   {
    printf("perimeter is greater");
   }
    return 0;
}