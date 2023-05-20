#include <iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,0,5};
    int targetsum=6;
    int size=6;

    int triplets=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(array[i]+array[j]+array[k]==targetsum){
                    triplets++;
                }
            }
        }
    }
    cout<<triplets;
    return 0;
}