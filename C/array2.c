 #include<stdio.h>
 int main(){
 int a[5];
 printf("enter the value of elements");
 int i;
 for(i=0;i<=4;i++){
 scanf("%d",&a[i]);}
 printf("element less than 4 are\n");
 for(i=0;i<=4;i++){
 if(a[i]<5){
    printf("%d\n",i);
 }
 }
 return 0;
 }
    
   