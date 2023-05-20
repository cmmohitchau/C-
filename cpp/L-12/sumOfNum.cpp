#include<iostream>
using namespace std;
int main(){
int array[5]={1,3,4,7,9};
int size=sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    cout<<sum;
}