#include<iostream>
using namespace std;
int main(){
    int array[]={3,4,5,6,7,2};
    int max=INT16_MIN;
    int size=6;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max<<endl;
    return 0;
}