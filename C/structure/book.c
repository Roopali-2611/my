#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        int noOfpages;
        int price;
        char name[90];
    }a,b,c;
    struct book;
    a.noOfpages=79;
    a.price=230;
    strcpy(a.name,"Alchiemist");
    printf("%s ",a.name);
return 0;
}

