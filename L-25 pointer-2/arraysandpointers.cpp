#include <iostream>
using namespace std;
int main(){
    int arr[5]={22,33,45,43,12};
    int *ptr=&arr[0];

    cout<<ptr<<" "<<*ptr<<endl;
    cout<<arr<<" "<<*arr<<endl;

    cout<<*(ptr+1)<<" "<<*(arr+1)<<endl;
    cout<<ptr+1<<" "<<arr+1<<endl;
    return 0;
}