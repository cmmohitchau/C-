#include<iostream>
using namespace std;

int main(){
    int arr[2]={1,13};
    
    int *ptr=&arr[0];
    cout<<ptr<<" "<<*ptr<<endl;
    cout<<*ptr++<<endl; //first it return arr[0] and then(updating)
                        //pointing to next consecutive arr
    cout<<arr[0]<<" "<<arr[1]<<endl;
    cout<<ptr<<" "<<*ptr<<endl;
    return 0;
}