#include <iostream>
int main(){
    //single number or int
    int x;//declaration
    x=5;//assignment
    std::cout<<x <<'\n';
    //float
    float y=6.5;
    std::cout <<y <<'\n';
    //addition
    std::cout<<x+y <<'\n';
    ///character
    char grade ='A';
    //hexadecimal
    int hexa='A';
    std::cout<<grade <<'\n';
    std::cout <<hexa<<'\n';
    //string
    std::string name= "moon";
    std::cout<< name <<'\n';
    //conacatination
    std::cout<<"hello "<<name<<'\n';
    int a;
    std::cin>>a;
    std::cout<<"the entered input is "<<a;


    return 0;
}