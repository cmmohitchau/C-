#include<iostream>
using namespace std;
int largestIndex(int array[],int size){
    int max=INT16_MIN;
   int  maxIndex=0;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxIndex=i;
        }

    }
    return maxIndex;
}
int main(){
    int array[]={1,2,3,4,5,5,3};
    int size=7;
    int largesteleIndex=largestIndex(array,size);
   int largestele=array[largesteleIndex];
   cout<<largestele<<endl;
    for(int i=0;i<7;i++){
        if(array[i]==largestele){
            array[i]=-1;
        }
    }
    int secondlargeseleIndex=largestIndex(array,size);
    cout<<array[secondlargeseleIndex];


}