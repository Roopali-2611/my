#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter  a number");
    scanf("%d",&n);
    int a=0; 
    for(i=2;i<=n-1;i++){
    if(n%i==0){
        a=1;
        break;}}
if (a==0)
   { printf("The given number is prime");
if(a==1)
printf("The number is neither prime nor composite");}
else printf("the given number is composite");
    return 0;
}