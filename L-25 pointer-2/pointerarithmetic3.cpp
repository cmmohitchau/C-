#include<iostream>
using namespace std;

int main(){
    int arr[2]={15,23};
    int *ptr=&arr[0];

    cout<<*++ptr<<endl; //first it update the address and then dereference
    cout<<arr[0]<<" "<<arr[1]<<endl;
    return 0;
}