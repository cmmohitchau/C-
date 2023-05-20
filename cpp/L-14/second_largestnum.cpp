#include<iostream>
using namespace std;
int main(){
    int array[]={3,4,5,6,1,2,6};
    int size=7;
    int max=INT16_MIN;
    int secmax=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max<<endl;
    for(int i=0;i<size;i++){
        if(array[i]>secmax && array[i]!=max ){
            secmax=array[i];
        }
    }
    cout<<secmax<<endl;
    return 0;

}