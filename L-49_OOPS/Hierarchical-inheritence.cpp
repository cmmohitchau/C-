#include<iostream>
using namespace std;

class parent{
    public:
    parent(){
        cout<<"This is parent class"<<endl;
    }
};

class child1: public parent{
    public:
    child1(){
        cout<<"This is child1 class"<<endl;
    }
};

class child2: public parent{
    public:
    child2(){
        cout<<"This is child1 class"<<endl;
    }
};

int main(){
    child1 c;
    child2 c1;
    return 0;
}
