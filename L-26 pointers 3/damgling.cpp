#include <iostream>
using namespace std;
int main(){
    int *ptr;
    {
        int x=90;
        ptr=&x;
    }
    cout<<*ptr<<endl;
} 