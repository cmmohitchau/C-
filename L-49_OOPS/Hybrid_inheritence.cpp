#include<iostream>
using namespace std;

class parent{
    public:
    parent(){
        cout<<"This is parent class"<<endl;
    }
};

class child1:public parent{
    public:
    child1(){
        cout<<"This is child 1"<<endl;

    }
};
class child2:public parent{
    public:
    child2(){
        cout<<"This is child 2"<<endl;

    }
};
class Grandchild:public child2{
    public:
    Grandchild(){
        cout<<"This is child of child2"<<endl;

    }
};

int main(){
    Grandchild c;
    
}