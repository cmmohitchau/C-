#include <iostream>
using namespace std;
int main(){
    int arr[2]={13,45};
    int *ptr=&arr[0];

    cout<<++*ptr<<endl; //first it derefernce to arr[0] and then updating value

    cout<<arr[0]<<" "<<arr[1]<<endl;
    return 0;
}