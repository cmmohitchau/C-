#include <iostream>
using namespace std;

int main(){
    
    int arr[2]={12,45};

    int *ptr=&arr[0];

    cout<<(*ptr)++<<endl;  //first return *ptr means 12 and 
                           //then updating the value in arr[0]
    cout<<arr[0]<<" "<<arr[1]<<endl;  //returning the updated value

    return 0;
}