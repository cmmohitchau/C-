#include<iostream>
using namespace std;
int largestElementIndex(int array[],int size){
    int max=INT16_MIN;
    int maxIndex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxIndex=i;

        }
    }
    return maxIndex;

}
    int main(){
        int array[]={2,4,5,6,9,6,7};
        int size=7;
        int largestIndex=largestElementIndex(array,size);
        cout<<array[largestIndex]<<endl;
        array[largestIndex]=-1;
        int secondLargestIndex=largestElementIndex(array,size);
        cout<<array[secondLargestIndex];
        return 0;



}