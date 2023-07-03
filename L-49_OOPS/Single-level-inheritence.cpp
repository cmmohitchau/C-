// Types of inheritence and this is single level inheritence

#include<iostream>
using namespace std;

class Parent {
    public:
Parent(){
     cout<<"This is parent class"<<endl;
}
};

class child: public Parent{
    public:
    child(){
        cout<<"Child class";
    }
};

int main(){
    child c;
}