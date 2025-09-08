#include<iostream>
#include<string>
using namespace std;
class Student {
    string name;
    string classname;
    int roll;
    public:
    void setName(string n, string c, int r) ;
    void display();
};
void Student::setName(string n, string c, int r){
    name = n;
    classname = c;
    roll = r;
}
void Student::display(){
    cout<<name<<endl<<classname<<endl<<roll<<endl;
}
int main(){
    Student s;
    s.setName("roopali sharma","CSE",61);
    s.display();
    Student s1;
    s1.setName("moon","cse",62);
    s1.display();
    

}
