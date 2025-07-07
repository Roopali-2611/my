#include<stdio.h>
int main()
{int arr[5],i;//5 boxes are made which we call as array
    for(i=0;i<=4;i++){  //first box is denoted as 0 second as1 and so on it is not shown on the screen it is just for the underrstanding of system 
    printf("\nEnter the element number%d",i+1);  //it is basically used for the specification and telling the user to write the value of particular array
    scanf("%d",&arr[i]);}  //used for the input of value of first element of array second element of array and so on
    for(int i=0;i<5;i++){  //it is used for increment of numbers written after enter the number__
    printf("%d ",arr[i]);}  //now at the end we will print the value of all the elements of an array
    return 0;
}