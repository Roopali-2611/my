#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        int noOfpages;
        int price;
        char name[90];
    }baba;
    baba a;
    baba b;
    baba c;
    struct book;
    a.noOfpages=79;
    a.price=230;
    strcpy(a.name,"Alchiemist");
    printf("%s ",a.name);
return 0;
}

