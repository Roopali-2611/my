#include<iostream>
using namespace std;
class A{
    public:
    int a;
    A(int x){
        a=x;
    }
    A(const A &obj) {
        a = obj.a;
    }
    void show(){
        cout<<a<<endl;
    }
};
int main(){
    A a1(10);
    A a2(a1);
    a1.show();
    a2.show();
}