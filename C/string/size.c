#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("enter string");
    gets(str);
    puts("your input was:");
    puts(str);
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("%d",size);
    return 0;
    }
