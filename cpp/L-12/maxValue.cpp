#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,13,5,7,9};
    int max=INT16_MIN;
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max;
}