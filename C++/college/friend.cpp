#include<iostream>
#include<string>
using namespace std;
class A{
    int x;
    int y;
    int s;
    public:
        void sum(int ,int);
        void show();
};
void A::sum(int a,int b){
    x=a;
    y=b;
    s = a+b;
}
void A::show(){
    cout<<s<<'\n';
}
int main(){
    A a1;
    A a2;
    a1.sum(2,3);
    a2.sum(10,30);
    a1.show();
    a2.show();
}