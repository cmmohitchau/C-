#include<iostream>
using namespace std;

class parent{
    public:
    parent(){
         cout<<"This is parent class"<<endl;
    }
   
};

class child:public parent{
    public:
child(){
    cout<<"child class"<<endl;
}
};

class Grandchild:public child{
    public:
    Grandchild(){
        cout<<"This is Grand child"<<endl;
    }
};

int main(){
    Grandchild G;
}