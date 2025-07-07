#include<stdio.h>
void england()
{
    printf("i am in england right now\n");
    return;
}
void london()
{
    printf("i want to go to london for christmas celebration\n");
    england();
    return;
}
void india()
{
    printf("even though i live in india and i am  an indian but nevermind\n");
    london();
    return;
}
int main(){
india();
return 0;}