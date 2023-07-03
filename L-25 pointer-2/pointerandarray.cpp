#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,7,9};
    int (*p)[5]=&arr;

    cout<<p<<" "<<arr<<" "<<*p<<" "<<*arr<<endl;
}