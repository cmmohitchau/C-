#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<n<<" is even and divisible by 3";
    }
    else{
        cout<<n<<"number is either odd or not divisible by 3";
    }

}