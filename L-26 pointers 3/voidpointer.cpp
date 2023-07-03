#include <iostream>
using namespace std;
int main(){
    int x=12;
    float f=15.4;
    void *ptr = &f;
    ptr = &x;

    float *integerPointer = (float *)ptr;
    

   

    cout<<*integerPointer<<endl;
    
}