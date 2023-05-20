#include<iostream>
using namespace std;
int main(){
    int array[6];

    for(int &ele:array){
        cin>>ele;
    }
    for(int ele:array){
        cout<<ele<<" ";
    }

}