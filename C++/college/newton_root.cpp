#include<iostream>
#include<cmath>
using namespace std;
double fn(double x,double a,double n){
    return pow(x,n)-a;
}
double fn1(double x,double a,double n){
    return n*pow(x,n-1);
}
void newton(double e,double x0,double a,double n){
    double h,x1;
    h=fn(x0,a,n)/fn1(x0,a,n);
    while(abs(h)>=e){
        x1=x0-h;
        x0=x1;
        h=fn(x1,a,n)/fn1(x1,a,n);
    }
    cout<<x1;

}
int main(){
    double e,x0,a,n;
    cout<<"enter the value of tollerence"<<endl;
    cin>>e;
    cout<<"enter the value of approximation"<<endl;
    cin>>x0;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    newton(e,x0,a,n); 
}