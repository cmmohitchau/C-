#include<iostream>
using namespace std ;
int main(){

    int *ptr;
    int marks=90;
    ptr=&marks;

    cout<<"The address of variable marks is:"<<ptr<<endl;
    cout<<"The value stored inside the variable marks is :"<<*ptr<<endl;

    *ptr=111;  //updating the value that which address is stored in ptr
    cout<<*ptr<<endl;
    return 0;
}