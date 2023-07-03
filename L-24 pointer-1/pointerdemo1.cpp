#include<iostream>
using namespace std ;
int main(){
    int x=5;
    float y=8.99;

    int *ptr=&x; //storing the address of x in ptr variable
    float *ptr1=&y; //storing the address of float data type y in ptr1 variable

    cout<<ptr<<endl; //printing the adress that stored in the ptr varialble
    cout<<ptr1<<endl; //printing the address that stored in the ptr1 variable
     
     return 0;
}