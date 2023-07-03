#include<iostream>
using namespace std;

class sum{
    public:
    void add(int x,int y){
        int sum = x +y;
        cout<<sum<<endl;
    }

    void add(int x,int y, int z){
        int sum = x+y+z;
        cout<<sum<<endl;
    }
    void add(float x,float y){
        float sum = x+y;
        cout<<sum;
    }

};
int main(){
    sum s;
    s.add(2,5);
    s.add(3,6,9);
    s.add(float(5.5),float(9.6));
    return 0;
}