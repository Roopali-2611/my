#include<stdio.h>
void reverse(int arr[]){
    int i=1;
    int j=4;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;}
}
int main(){
    int i;
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr);
    for(i=0;i<7;i++){
    printf("%d",arr[i]);}
    return 0;
}