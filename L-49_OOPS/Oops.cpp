#include<iostream>
using namespace std;

class Fruit{
    public:
    string name;
    string color;
};

int main(){
    Fruit apple;
    apple.name="Apple";
    apple.color="Red";
    cout<<apple.name<<" "<<apple.color<<endl;

    Fruit *Grapes = new Fruit();
    Grapes->name="Grapes";
    Grapes->color="Green";

    cout<<Grapes->name<<"-"<<Grapes->color<<endl;
    return 0;    
    
    }