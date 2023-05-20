#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    bool sortedflag=true;
    int array[]={1,2,4,5,6};
    for(int i=1;i<6;i++){
        if(array[i]<=array[i-1]){
            sortedflag=false;
        }
    }
    cout<<sortedflag<<endl;
}