#include<iostream>
#include<cmath>
using namespace std;
double fn(double x){
    return x * log10(x) - 1.2;
}
double fn1(double x){
    return log10(x) + 1.0 / log(10);
}
void newton(double e,double x0){
    double h,x1;
    h=fn(x0)/fn1(x0);
    while(abs(h)>=e){
        x1=x0-h;
        x0=x1;
        h=fn(x1)/fn1(x1);
    }
    cout<<x1;

}
int main(){
    double e,x0;
    cout<<"enter the value of tollerence"<<endl;
    cin>>e;
    cout<<"enter the value of approximation"<<endl;
    cin>>x0;
    newton(e,x0); 
}