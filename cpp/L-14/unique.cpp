#include<iostream>
using namespace std;
int main(){
    int array[]={3,5,1,1,5,3,4,7};
    int size=8;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    int unique=0;
    for(int i=0;i<size;i++){
       
            if(array[i]>0){
                 cout<<array[i]<<endl;
            }
        }
    
   
}