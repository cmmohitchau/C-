#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,45,6,7};
    int *ptr=(arr+2);
    *ptr--;
 
    
    cout<<*ptr<<endl;
}