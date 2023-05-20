#include<iostream>
#include<vector>
using namespace std;
int main(){
    int array[]={2,4,5,6,7,8};
    bool sortedflag=true;
    for(int i=1;i<6;i++){
        if(array[i]<=array[i-1]){
            sortedflag=false;
        }
    }
    cout<<sortedflag<<endl;
}