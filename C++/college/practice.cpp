#include <iostream>
#include <string>
using namespace std;

class students{
    std::string name;
    std::string classname;
    int rollno;
    public:void set(std::string,std::string,int);
    void show();
};
void students::set(std::string n,std::string c,int r){
    name = n;
    classname = c;
    rollno = r;
}
void students::show(){
    cout<<name<<'6\n'<<classname<<'\n'<<rollno;
}
int main(){
    students s1;
    s1.set("roopali","cse",61);
    s1.show();
    return 0;
}