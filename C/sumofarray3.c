#include<stdio.h>
int main()
{
    int arr[3];
     printf("enter the elements of the given array");
     for(int a=0;a<=2;a++){
     scanf("%d",&arr[a]);}
     int sum =0;
     for (int i=0;i<=2;i++)
     {
        sum=sum+arr[i];}
        printf("%d",sum);
        return 0;
     
}