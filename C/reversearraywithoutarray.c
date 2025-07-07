#include<stdio.h>
void reverse(int arr[]){// function define
    int i=0;
    int j=6;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;}
}
int main(){//compilation or any reading will start from here
    int i;
    int arr[7]={1,2,3,4,5,6,7};//function declare
    reverse(arr);
    for(i=0;i<7;i++){
    printf("%d",arr[i]);}
    return 0;
}