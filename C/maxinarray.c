#include<stdio.h>
int main()
{ 
    int arr[3];
    printf("enter the elements of the array:");
    for(int a=0;a<=2;a++){
        scanf("%d",&arr[a]);}
    int max=0;
    for(int i=0;i<=2;i++){
    if(max<arr[i]){
        max=arr[i];}}
        printf("the largest number is %d",max);
    
    return 0;
}