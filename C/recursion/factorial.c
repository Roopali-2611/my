#include<stdio.h>
int factorial(int n)
{
    //  int fact=1;                this is the basic method that we usually do and what we have actually learned earlier but the only difference is that this time you are using functions with it
    //  for(int i=2;i<=n;i++){
    //     fact=fact*i;
    //  }
    if(n==1||n==0)return 1;  //this can also be modified or can be written in a fancy way :-int recAns=n*factorial(n-1)and then in the next line we can do return recAns; thus is nothing else but just a fancy  way to impress anyone in recursion
     return n*factorial(n-1);
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);
    return 0;
}